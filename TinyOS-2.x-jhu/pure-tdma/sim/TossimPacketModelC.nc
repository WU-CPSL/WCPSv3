// $Id: TossimPacketModelC.nc,v 1.10 2009/09/17 21:54:42 sunheeyoon Exp $
/*
 * "Copyright (c) 2005 Stanford University. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 * 
 * IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF STANFORD UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * STANFORD UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND STANFORD UNIVERSITY
 * HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 * ENHANCEMENTS, OR MODIFICATIONS."
 */

/**
 *
 * This packet-level radio component implements a basic CSMA
 * algorithm. It derives its constants from sim_csma.c. The algorithm
 * is as follows:
 *
 * Transmit iff you measure a clear channel min_free_samples() in a row.
 * Sample up to max_iterations() times. If you do not detect a free
 * channel in this time, signal sendDone with an error of EBUSY.
 * If max_iterations() is zero, then sample indefinitely.
 *
 * On a send request, use an initial backoff in the range of
 * init_low() to init_high().
 * Subsequent backoffs are in the range
         <pre>(low, high) * exponent_base() ^ iterations</pre>
 *
 * The default exponent_base is 1 (constant backoff).
 *
 *
 * @author Philip Levis
 * @date Dec 16 2005
 *
 */

#include <TossimRadioMsg.h>
#include <sim_csma.h>

module TossimPacketModelC { 
  provides {
    interface Init;
    interface SplitControl as Control;
    interface PacketAcknowledgements;
    interface TossimPacketModel as Packet;
    
    interface TossimPacketModelCCA;
  }
  uses interface GainRadioModel;
}

implementation {
  bool initialized = FALSE;
  bool running = FALSE;
  uint8_t backoffCount;
  uint8_t neededFreeSamples;
  message_t* sending = NULL;
  bool transmitting = FALSE;
  uint8_t sendingLength = 0;
  int destNode;
  sim_event_t sendEvent;
  
  uint8_t cca_enable_flag;
  
  message_t receiveBuffer;
  
  tossim_metadata_t* getMetadata(message_t* msg) {
    return (tossim_metadata_t*)(&msg->metadata);
  }
  
  command error_t Init.init() {
    dbg("TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
    initialized = TRUE;
    // We need to cancel in case an event is still lying around in the queue from
    // before a reboot. Otherwise, the event will be executed normally (node is on),
    // but its memory has been zeroed out.
    sendEvent.cancelled = 1;
    return SUCCESS;
  }

  task void startDoneTask() {
    running = TRUE;
    signal Control.startDone(SUCCESS);
  }

  task void stopDoneTask() {
    running = FALSE;
    signal Control.stopDone(SUCCESS);
  }
  
  command error_t Control.start() {
    if (!initialized) {
      dbgerror("TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
    dbg("TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
    post startDoneTask();
    return SUCCESS;
  }
  
  command error_t Control.stop() {
    if (!initialized) {
      dbgerror("TossimPacketModelC", "TossimPacketModelC: Control.stop() called before initialization!\n");
      return FAIL;
    }
    running = FALSE;
    dbg("TossimPacketModelC", "TossimPacketModelC: Control.stop() called.\n");
    post stopDoneTask();
    return SUCCESS;
  }
  
  async command error_t PacketAcknowledgements.requestAck(message_t* msg) {
    tossim_metadata_t* meta = getMetadata(msg);
    //printf("This is sensor:%u, and we are going to set the ACK true!\n", TOS_NODE_ID);
    meta->ack = TRUE;
    return SUCCESS;
  }

  async command error_t PacketAcknowledgements.noAck(message_t* ack) {
    tossim_metadata_t* meta = getMetadata(ack);
    meta->ack = FALSE;
    return SUCCESS;
  }

  async command error_t PacketAcknowledgements.wasAcked(message_t* ack) {
    tossim_metadata_t* meta = getMetadata(ack);
    //printf("This is sensor:%u, and we are going to RETURN the ACK status, which is:%u!\n", TOS_NODE_ID, meta->ack);
    return meta->ack;
  }
      
  task void sendDoneTask() {
    message_t* msg = sending;
    tossim_metadata_t* meta = getMetadata(msg);
    meta->ack = 0;
    meta->strength = 0;
    meta->time = 0;
    sending = FALSE;
    signal Packet.sendDone(msg, running? SUCCESS:EOFF);
  }

  command error_t Packet.cancel(message_t* msg) {
    return FAIL;
  }

  void start_csma();
  void send_transmit_with_cca(sim_event_t* evt);

  command error_t Packet.send(int dest, message_t* msg, uint8_t len) {
    if (!initialized) {
      dbgerror("TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
    if (!running) {
      dbgerror("TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;

    }
    if (sending != NULL) {
      return EBUSY;
    }
    sendingLength = len; 
    sending = msg;
    destNode = dest;
    backoffCount = 0;
    neededFreeSamples = sim_csma_min_free_samples();
    start_csma();
	//printf("Sensor: %u, CHANNEL CCAing, neededFreeSamples:%u, Time:%s\n", TOS_NODE_ID, neededFreeSamples, sim_time_string());
    return SUCCESS;
  }

  void send_backoff(sim_event_t* evt);
  void send_backoff_cancel_packet(sim_event_t* evt);
  void send_transmit(sim_event_t* evt);
  void send_transmit_done(sim_event_t* evt);  
  
  void send_transmit_with_cca_fake(sim_event_t* evt);
  
  void start_csma() {
    sim_time_t delay;
    delay = sim_csma_rxtx_delay();
    delay *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
    sendEvent.mote = sim_node();
    sendEvent.time = sim_time() + delay;
    sendEvent.force = 0;
    sendEvent.cancelled = 0;
	if (cca_enable_flag == 0){
		sendEvent.handle = send_transmit;
	}
	else if(cca_enable_flag == 1){
		sim_time_t backoff_random = sim_random();
		sim_time_t backoff = backoff_random;
		//backoff %= (sim_csma_init_high() - sim_csma_init_low());
		backoff %= 100;
    	//backoff += sim_csma_init_low();
    	backoff *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
    	//printf("Sensor:%u, backoff_random:%u, backoff:%u, sim_csma_init_high:%u, sim_csma_init_low:%u\n", TOS_NODE_ID, backoff_random, backoff, sim_csma_init_high(), sim_csma_init_low()); 
    	sendEvent.time = sim_time() + backoff;
		sendEvent.handle = send_backoff;
	}else if(cca_enable_flag == 2){
    	//sendEvent.time = sim_time() + 10000000;
    	sendEvent.time = sim_time() + 2000000;// to offset CSMA send from TDMA send; otherwise, TOSSIM clock is too accurate and CCA will not detect TDMA.    	    	
 		sendEvent.handle = send_backoff_cancel_packet;
 		//printf("Sensor:%u, STEALING on the way, going for send_backoff_cancel_packet, Time:%s\n", TOS_NODE_ID, sim_time_string());
	}
	
    sendEvent.cleanup = sim_queue_cleanup_none;
    transmitting = TRUE;
    //call GainRadioModel.setPendingTransmission();
    sim_queue_insert(&sendEvent);
  }

  int sim_packet_header_length() {
    return sizeof(tossim_header_t);
  }
  
  void send_transmit(sim_event_t* evt) {
    sim_time_t duration;
    tossim_metadata_t* metadata = getMetadata(sending);
    duration = 8 * (sendingLength + sim_packet_header_length());
    duration /= sim_csma_bits_per_symbol();
    duration += sim_csma_preamble_length();
    if (metadata->ack) {
      duration += sim_csma_ack_time();
    }
    duration *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
    evt->time += duration;
    evt->handle = send_transmit_done;
	//printf("***Sensor: %u, TDMA SEND reached, flag:%u, Time:%s\n", TOS_NODE_ID, cca_enable_flag, sim_time_string());
    dbg("TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
    call GainRadioModel.putOnAirTo(destNode, sending, metadata->ack, evt->time, 0.0, 0.0, sim_mote_get_radio_channel(sim_node()));
    metadata->ack = 0;
    evt->time += (sim_csma_rxtx_delay() *  (sim_ticks_per_sec() / sim_csma_symbols_per_sec()));
    dbg("TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);
    sim_queue_insert(evt);
  }
  
  void send_transmit_with_cca(sim_event_t* evt) {
    sim_time_t duration;
    tossim_metadata_t* metadata = getMetadata(sending);
    duration = 8 * (sendingLength + sim_packet_header_length());
    duration /= sim_csma_bits_per_symbol();
    duration += sim_csma_preamble_length();
    if (metadata->ack) {
      duration += sim_csma_ack_time();
    }
    duration *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
    evt->time += duration;
    evt->handle = send_transmit_done;
    //printf("###Sensor: %u, send_transmit_with_cca reached, flag:%u, Time:%s\n", TOS_NODE_ID, cca_enable_flag, sim_time_string());
    dbg("TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");	    
    call GainRadioModel.putOnAirTo(destNode, sending, metadata->ack, evt->time, 0.0, 0.0, sim_mote_get_radio_channel(sim_node()));// changed by Bo, during make after changed putOnAirTo in CpmModelC.nc
    metadata->ack = 0;
    evt->time += (sim_csma_rxtx_delay() *  (sim_ticks_per_sec() / sim_csma_symbols_per_sec()));
    dbg("TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);
    sim_queue_insert(evt);
  }
  
    void send_transmit_with_cca_fake(sim_event_t* evt) {
    sim_time_t duration;
    tossim_metadata_t* metadata = getMetadata(sending);
    duration = 8 * (sendingLength + sim_packet_header_length());
    duration /= sim_csma_bits_per_symbol();
    duration += sim_csma_preamble_length();
    if (metadata->ack) {
      duration += sim_csma_ack_time();
    }
    duration *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
    evt->time += duration;
    evt->handle = send_transmit_done;
    //printf("###Sensor: %u, send_transmit_with_cca_fake reached, flag:%u, Time:%s\n", TOS_NODE_ID, cca_enable_flag, sim_time_string());
    call GainRadioModel.putOnAirTo(66, sending, metadata->ack, evt->time, 0.0, 0.0, sim_mote_get_radio_channel(sim_node()));// changed by Bo, during make after changed putOnAirTo in CpmModelC.nc
    metadata->ack = 0;
    evt->time += (sim_csma_rxtx_delay() *  (sim_ticks_per_sec() / sim_csma_symbols_per_sec()));
    sim_queue_insert(evt);
  }
  

  void send_transmit_done(sim_event_t* evt) {
    message_t* rval = sending;
    sending = NULL;
    transmitting = FALSE;
    dbg("TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
    signal Packet.sendDone(rval, running? SUCCESS:EOFF);
  }

  event void GainRadioModel.receive(message_t* msg) {
    if (running && !transmitting) {
      signal Packet.receive(msg);
    }
  }

  uint8_t error = 0;
  
  event void GainRadioModel.acked(message_t* msg) {
    if (running) {
      tossim_metadata_t* metadata = getMetadata(sending);
      metadata->ack = 1;
      if (msg != sending) {
	error = 1;
	dbg("TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, sending);
      }
    }
  }

  event bool GainRadioModel.shouldAck(message_t* msg) {
    if (running && !transmitting) {
      return signal Packet.shouldAck(msg);
    }
    else {
      return FALSE;
    }
  }
  
void send_backoff(sim_event_t* evt) {//for shared slot contending, if clear, backoff; else, send out.
    backoffCount++;    
    //printf("Sensor: %u, CHANNEL CCAing, sim_csma_max_iterations():%u, Time:%s\n", TOS_NODE_ID, sim_csma_max_iterations(), sim_time_string());
    if (call GainRadioModel.clearChannel()) {//make this crystal clear
      neededFreeSamples--;
    }
    else {
      neededFreeSamples = sim_csma_min_free_samples();
      //printf("Sensor: %u, CHANNEL unCLEAR, neededFreeSamples:%u, Time:%s\n", TOS_NODE_ID, neededFreeSamples, sim_time_string());
    }
    if (neededFreeSamples == 0) {
      message_t* rval = sending;
      sim_time_t delay;
      delay = sim_csma_rxtx_delay();
      delay *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
      evt->time += delay;
      transmitting = TRUE;
      evt->handle = send_transmit_with_cca;
      sim_queue_insert(evt);
      //printf("Sensor:%u, backoff triggered at time:%s.\n", TOS_NODE_ID, sim_time_string());
    }
    else if (sim_csma_max_iterations() == 0 || backoffCount <= sim_csma_max_iterations()) {
      sim_time_t backoff = sim_random();
      sim_time_t modulo = sim_csma_high() - sim_csma_low();
      modulo *= pow(sim_csma_exponent_base(), backoffCount);
      backoff %= modulo;			
      backoff += sim_csma_init_low();
      backoff *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
      evt->time += backoff;
      sim_queue_insert(evt);
    }
    else {
      message_t* rval = sending;
      sending = NULL;
      dbg("TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
      signal Packet.sendDone(rval, EBUSY);
    }
}

void send_backoff_cancel_packet(sim_event_t* evt) {//for CHANNEL STEALING: if channel clear, cancel the send; else, send out the stealing packet.
    //printf("Sensor: %u, send_backoff_cancel_packet, CHANNEL CCAing, sim_csma_max_iterations():%u, Time:%s\n", TOS_NODE_ID, sim_csma_max_iterations(), sim_time_string());
    if (call GainRadioModel.clearChannel()) {
      sim_time_t delay;
      message_t* rval = sending;
      delay = sim_csma_rxtx_delay();
      delay *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
      evt->time += delay;
      transmitting = TRUE;
	  evt->handle = send_transmit_with_cca;
      sim_queue_insert(evt);
      //printf("Sensor: %u, Channel CLEAR, SEND processed, Time:%s\n", TOS_NODE_ID, sim_time_string());
    }else{
      sim_time_t delay;
      message_t* rval = sending;
      delay = sim_csma_rxtx_delay();
      delay *= (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
      evt->time += delay;
      transmitting = TRUE;
      sim_mote_set_radio_channel(sim_node(), 20);
      //printf("%u, %u, %u, %u, %u, %u, %u, %u\n", 0, TOS_NODE_ID, 0, 0, 0, 0, 0, 8);
	  evt->handle = send_transmit_with_cca_fake;
      sim_queue_insert(evt);
      //printf("Sensor: %u, Channel unCLEAR, FALSE SEND canceled, Time:%s\n", TOS_NODE_ID, sim_time_string());
    }
}

  command error_t TossimPacketModelCCA.set_cca(uint8_t enable){
  	cca_enable_flag = enable;
  }
}


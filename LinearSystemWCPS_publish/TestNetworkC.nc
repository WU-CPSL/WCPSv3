/**
 * Testnework for TDMA simulation in Tossim. 
 * @author Bo Li
 * @version $Revision: 0.1 $ $Date: 2011/03/25 21:53:58 $
 */
#include <Timer.h>
#include "TestNetwork.h"

#define slotSamplingPeriod 3

module TestNetworkC {
  uses interface Boot;
  uses interface SplitControl as RadioControl;
  uses interface StdControl as RoutingControl;
  uses interface AMSend as Send;
  uses interface Receive;
  uses interface Receive as AMReceive;
  uses interface CC2420Config;

  uses interface Alarm<T32khz, uint32_t>;  
  uses interface AMPacket;
  uses interface PacketAcknowledgements;
  uses interface ChannelMonitor;
  uses interface AsyncSend as SubSend_SSTdma;  
}
implementation {
  message_t packet;
  uint8_t fire_count=0;
  TestNetworkMsg* rcm;
  TestNetworkMsg* rcmr;
  TestNetworkMsg* msgamr;
  
  TestNetworkMsg tnmsg_in_transit; 
  uint8_t msglen;
  uint16_t packetCount=10;
  bool sendBusy = FALSE;
  
  enum {
    RECEIVER=0,
  };

  event void Boot.booted() {
  	call Alarm.stop();
	signal Alarm.fired();
    call RadioControl.start(); 
  }
  
  event void RadioControl.startDone(error_t err) {
    if (err != SUCCESS) {
      call RadioControl.start();
    }
    else {
        call CC2420Config.setChannel(26);
        call CC2420Config.sync();
    }
  }
  
  void failedSend() {}
  event void Send.sendDone(message_t* m, error_t err) {
    if (err != SUCCESS) {}
    sendBusy = FALSE;
  }

  uint8_t prevSeq = 0;
  uint8_t firstMsg = 0;
  event message_t* 
  
  Receive.receive(message_t* msg, void* payload, uint8_t len) {
  	am_addr_t src = call AMPacket.source(msg);
  	am_addr_t dest = call AMPacket.destination(msg);
  	rcmr = (TestNetworkMsg*)payload;   	
  	return msg;
 }
 
 event message_t* AMReceive.receive(message_t* bufPtr, void* payload, uint8_t len) {// this is receiving for control command injection
  	int i, j;
 	rcm = (TestNetworkMsg*)payload;
    msgamr = (TestNetworkMsg*)call Send.getPayload(&packet, sizeof(TestNetworkMsg));
    if (msgamr == NULL) {return;}
    tnmsg_in_transit.data1 = rcm->data1;
    tnmsg_in_transit.data2 = rcm->data2;
    memcpy(msgamr, &tnmsg_in_transit, sizeof(TestNetworkMsg));
    if (len != sizeof(TestNetworkMsg)) {
    	return bufPtr;
    }
  	return bufPtr;
  }
  
  event void RadioControl.stopDone(error_t err) {}
  void sendMessage() {}
  event void CC2420Config.syncDone(error_t error){
    if (error == SUCCESS) {
    } else {
      call CC2420Config.sync();
    }
  }
  
  async event void Alarm.fired() {}  
  async event void ChannelMonitor.busy() {}
  async event void ChannelMonitor.error() {}
  async event void ChannelMonitor.free() {}	
  async event void SubSend_SSTdma.sendDone(message_t *msg, error_t error) {}
}
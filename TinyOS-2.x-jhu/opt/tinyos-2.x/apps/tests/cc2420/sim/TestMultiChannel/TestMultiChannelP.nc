#define NODE1_CHANNEL 11
#define NODE2_CHANNEL 12

module TestMultiChannelP {
  uses {
    interface Boot;
    interface Leds;
    interface Timer<TMilli>;
    interface Receive;
    interface AMSend;
    interface SplitControl as RadioSplitControl;
    interface CC2420Config;
  }
}
implementation {
  message_t msg;
  
  event void Boot.booted() {
    if (TOS_NODE_ID == 0) {
      call CC2420Config.setChannel(NODE1_CHANNEL);
    } else {
      call CC2420Config.setChannel(NODE2_CHANNEL);
    }
    call CC2420Config.sync();
  }
  event void RadioSplitControl.startDone(error_t error) {
    if (error == SUCCESS) {
      if (TOS_NODE_ID == 0) {
        call Timer.startOneShot(1024);
      }
    } else {
      call RadioSplitControl.start();
    }
  }
  event void RadioSplitControl.stopDone(error_t error) {}
  event void Timer.fired() {    
    if (call AMSend.send(AM_BROADCAST_ADDR, &msg, 0) != SUCCESS) {
      call Timer.startOneShot(1024);
    }
  }
  event message_t* Receive.receive(message_t* buf, void* payload, uint8_t len) {
    dbg("TestMultiChannel", "Received\n");
    return buf;
  }
  event void AMSend.sendDone(message_t* buf, error_t error) {
    if (error == SUCCESS) {
      dbg("TestMultiChannel", "SendDone\n");
    }
    call Timer.startOneShot(1024);
  }
  event void CC2420Config.syncDone(error_t error)
  {
    if (error == SUCCESS) {
      call RadioSplitControl.start();
    } else {
      call CC2420Config.sync();
    }
  }
}
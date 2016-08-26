module CC2420ControlP
{
  provides {
    interface Init;
    interface CC2420Config;
  }
  uses interface SimMote;
}

implementation
{
  uint8_t channel;
  uint16_t address;
  uint16_t panAddress;
  bool addressRecognition;
  bool hwAddressRecognition;
  bool autoAck;
  bool hwAutoAck;
  command error_t Init.init()
  {
    channel = CC2420_DEF_CHANNEL;
#if defined(CC2420_NO_ACKNOWLEDGEMENTS)
    autoAck = FALSE;
#else
    autoAck = TRUE;
#endif
  
#if defined(CC2420_HW_ACKNOWLEDGEMENTS)
    hwAutoAck = TRUE;
#else
    hwAutoAck = FALSE;
#endif
    return SUCCESS;
  }

  task void syncDoneTask(){
    signal CC2420Config.syncDone(SUCCESS);
  }

  command error_t CC2420Config.sync(){
    dbg("CC2420Config", "CC2420Config: sync: autoAck %d, hwAutoAck %d\n", autoAck, hwAutoAck);
    sim_mote_set_radio_channel(sim_node(), channel);
    post syncDoneTask();
    return SUCCESS;
  }

  command uint8_t CC2420Config.getChannel() { return sim_mote_get_radio_channel(sim_node()); }
  command void CC2420Config.setChannel(uint8_t ch) { 
  	channel = ch;
  	//sim_mote_set_radio_channel(sim_node(), channel);
  	//printf("On sensor %u, I think I have set the wireless channel to %u at time: %s\n", TOS_NODE_ID, ch, sim_time_string());
  }
  
  async command uint16_t CC2420Config.getShortAddr() { return address; }
  command void CC2420Config.setShortAddr(uint16_t addr) { address = addr; }
  async command uint16_t CC2420Config.getPanAddr() { return panAddress; }
  command void CC2420Config.setPanAddr(uint16_t addr) { panAddress = addr; }

  command void CC2420Config.setAddressRecognition(bool enableAddressRecognition, bool useHwAddressRecognition){
    addressRecognition = enableAddressRecognition;
    hwAddressRecognition = useHwAddressRecognition;
  }
  
  async command bool CC2420Config.isHwAddressRecognitionDefault() { return hwAddressRecognition; }
  async command bool CC2420Config.isAddressRecognitionEnabled() { return addressRecognition; }

  command void CC2420Config.setAutoAck(bool enableAutoAck, bool enableHwAutoAck){
    autoAck = enableAutoAck;
    hwAutoAck = enableHwAutoAck;
    dbg("CC2420Config", "CC2420Config: setAutoAck: autoAck %d, hwAutoAck %d\n", autoAck, hwAutoAck);
  }
  
  async command bool CC2420Config.isHwAutoAckDefault() { return hwAutoAck; }
  async command bool CC2420Config.isAutoAckEnabled() { return autoAck; }
  default event void CC2420Config.syncDone( error_t error ) { }
}

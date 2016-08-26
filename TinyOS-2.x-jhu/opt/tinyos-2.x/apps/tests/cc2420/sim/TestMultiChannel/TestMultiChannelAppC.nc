configuration TestMultiChannelAppC {}

implementation {
  components MainC,
             TestMultiChannelP, 
             LedsC,
             new AMSenderC(0x00),
             new AMReceiverC(0x00),
             new TimerMilliC(),
             CC2420ControlC,
             ActiveMessageC;
  
  TestMultiChannelP.Boot -> MainC.Boot;
  
  TestMultiChannelP.Receive -> AMReceiverC;
  TestMultiChannelP.AMSend -> AMSenderC;
  TestMultiChannelP.RadioSplitControl -> ActiveMessageC;
  TestMultiChannelP.Leds -> LedsC;
  TestMultiChannelP.Timer -> TimerMilliC;
  TestMultiChannelP.CC2420Config -> CC2420ControlC;
}

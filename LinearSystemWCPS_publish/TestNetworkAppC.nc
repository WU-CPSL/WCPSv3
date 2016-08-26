/**
 * Testnework for TDMA simulation in Tossim. 
 * @author Bo Li
 * @version $Revision: 0.1 $ $Date: 2011/03/25 21:53:58 $
 */
 
#include "TestNetwork.h"

configuration TestNetworkAppC {
	uses interface ChannelMonitor;
}
implementation {
  components TestNetworkC, MainC, ActiveMessageC;
  components new AMSenderC(AM_TESTNETWORKMSG) as Sender;  
  components new AMReceiverC(AM_TESTNETWORKMSG) as Receiver;  
  components new AMReceiverC(AM_TESTNETWORKMSG) as AMReceiver;
  
  //below for mac control in application layer
  components CC2420ControlC;
  components GenericSlotterC;
  components new Alarm32khz32C();
  components new SSTdmaSlotSenderC(32, 120, 8);
  components TDMASlotSenderC;
  components SenderDispatcherC;
  
  TestNetworkC.Boot -> MainC;
  TestNetworkC.RadioControl -> ActiveMessageC;
  TestNetworkC.Send -> Sender;  
  TestNetworkC.Receive -> Receiver;
  TestNetworkC.AMReceive -> AMReceiver;
  
  TestNetworkC.CC2420Config -> CC2420ControlC;
  TestNetworkC.Alarm -> Alarm32khz32C; 
  TestNetworkC.AMPacket -> ActiveMessageC;
  TestNetworkC.PacketAcknowledgements->Sender;
  TestNetworkC.ChannelMonitor=ChannelMonitor;
  TestNetworkC.SubSend_SSTdma -> SSTdmaSlotSenderC.Send;
}
configuration CC2420ActiveMessageC {
  provides {
    interface SplitControl;

    interface AMSend[uint8_t id];
    interface Receive[uint8_t id];
    interface Receive as Snoop[uint8_t id];

    interface Packet;
    interface AMPacket;
    interface PacketAcknowledgements;
    interface PacketLink;
    interface CC2420Packet;
    interface SendNotifier[am_id_t amId];
  }
}
implementation {
  components TossimActiveMessageP as AM;
  components CC2420CsmaC as CsmaC;
  components NetworkC as Network;
  components ActiveMessageAddressC as Address;

  components UniqueSendC;
  components UniqueReceiveC;
  components CC2420TinyosNetworkC;
  components DummyLplC as LplC;
  components CC2420PacketC;

#if defined(PACKET_LINK)
  components PacketLinkC as LinkC;
#else
  components PacketLinkDummyC as LinkC;
#endif

  SplitControl = Network;
  SplitControl = CsmaC;

  AMSend       = AM;
  SendNotifier = AM;
  Receive      = AM.Receive;
  Snoop        = AM.Snoop;
  Packet       = AM;
  AMPacket     = AM;
  PacketLink   = LinkC;
  PacketAcknowledgements = Network;
  CC2420Packet = CC2420PacketC;

  AM.amAddress -> Address;

  // Send Layers
  AM.SubSend -> UniqueSendC;
  UniqueSendC.SubSend -> LinkC;
  LinkC.SubSend -> LplC.Send;
  LplC.SubSend -> CC2420TinyosNetworkC.Send;
  CC2420TinyosNetworkC.SubSend -> CsmaC;
  
  // Receive Layers
  AM.SubReceive -> LplC;
  LplC.SubReceive -> UniqueReceiveC.Receive;
  UniqueReceiveC.SubReceive -> CC2420TinyosNetworkC.Receive;
  CC2420TinyosNetworkC.SubReceive -> CsmaC;
}

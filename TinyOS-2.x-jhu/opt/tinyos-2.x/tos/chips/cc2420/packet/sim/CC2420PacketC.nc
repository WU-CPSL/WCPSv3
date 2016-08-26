#include "IEEE802154.h"
#include "message.h"

configuration CC2420PacketC
{
  provides {
    interface CC2420Packet;
    interface PacketAcknowledgements as Acks;
    interface CC2420PacketBody;
  }
}

implementation
{
  components TossimPacketModelC as Network;
  Acks = Network;

  components CC2420PacketP;
  CC2420Packet = CC2420PacketP;
  CC2420PacketBody = CC2420PacketP;
}

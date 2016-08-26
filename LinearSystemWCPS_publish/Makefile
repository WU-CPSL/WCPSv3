COMPONENT=TestNetworkAppC

BUILD_EXTRA_DEPS = TestNetworkMsg.py
CLEAN_EXTRA = TestNetworkMsg.class TestNetworkMsg.java TestNetworkMsg.pyc

include $(UPMA_DIR)/Makefile.include

#include the upma libraries, and change the mac to tdma
PFLAGS += -I/Users/yehanspc/Codes/TinyOS-2.x-jhu/pure-tdma

CFLAGS += -I$(TOSDIR)/lib/printf
CFLAGS += -DFOOTER_SIZE=0 -DTDMA -DUPMA
UPMA_MAC = pure-tdma

TestNetworkMsg.py: TestNetwork.h
	mig python -target=$(PLATFORM) $(CFLAGS) -python-classname=TestNetworkMsg TestNetwork.h TestNetworkMsg -o $@

CFLAGS += -DTOSH_DATA_LENGTH=156
CFLAGS += -I$(TOSDIR)/lib/T2Hack

include $(MAKERULES)
migclean:
	rm -rf $(MIGFILES)
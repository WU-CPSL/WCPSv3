/*
 * "Copyright (c) 2013 Washington University in St. Louis.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL WASHINGTON UNIVERSITY IN ST. LOUIS BE LIABLE TO ANY PARTY
 * FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING
 * OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF WASHINGTON
 * UNIVERSITY IN ST. LOUIS HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * WASHINGTON UNIVERSITY IN ST. LOUIS SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND WASHINGTON UNIVERSITY IN ST. LOUIS HAS NO
 * OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS."
 */
 
/**
 *
 * @author Bo Li
 * @version $Revision: 0.1 $
 * @date $Date: 2013/09/23$
 */

#include "SenderDispatcher.h"

generic configuration SSTdmaSlotSenderC(uint16_t offset, uint16_t backoff, uint16_t checkLength) {
	provides interface AsyncSend as Send;
	
	uses interface ChannelMonitor;
	uses interface AsyncSend as SubSend;
	uses interface AMPacket;
	uses interface CcaControl as SubCcaControl;
} implementation {
	components MainC;
	components LedsC;
	
	components new SSTdmaSlotSenderP(offset, backoff, checkLength);
	//e.g., components new SSTdmaSlotSenderP(32, 120, 8);
	components new Alarm32khz32C();

	MainC.SoftwareInit -> SSTdmaSlotSenderP.Init;
	SSTdmaSlotSenderP.SubSend = SubSend;
	SSTdmaSlotSenderP.AMPacket = AMPacket;
	SSTdmaSlotSenderP.SubCcaControl = SubCcaControl;
	SSTdmaSlotSenderP.Leds -> LedsC;
	SSTdmaSlotSenderP.ChannelMonitor = ChannelMonitor;
	Send = SSTdmaSlotSenderP;
	SSTdmaSlotSenderP.Alarm -> Alarm32khz32C;
	components RandomC;
  	SSTdmaSlotSenderP.Random -> RandomC;
}

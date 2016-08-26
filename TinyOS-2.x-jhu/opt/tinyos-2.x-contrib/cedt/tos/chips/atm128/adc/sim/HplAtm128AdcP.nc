/// $Id: HplAtm128AdcP.nc,v 1.3 2007/09/05 06:09:53 venkatesh2012 Exp $
/*
/**
 * "Copyright (c) 2007 CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc.
 *  All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 *
 * IN NO EVENT SHALL CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc BE LIABLE TO
 * ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc SPECIFICALLY DISCLAIMS
 * ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND CENTRE FOR ELECTRONICS
 * AND DESIGN TECHNOLOGY,IISc HAS NO OBLIGATION TO PROVIDE MAINTENANCE,
 * SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 */

 /**
  * Added ADC functionality for simulation.
  * Currently for MICA2, at ADC0, it returns the RSSI values
  * For other ADC PINs and other platforms, it returns a random number masked to 0x3FF
  *
  * @author Venkatesh S
  * @author Prabhakar T V
  */

module HplAtm128AdcP {
implementation {
  async command Atm128Admux_t HplAtm128Adc.getAdmux() { 
  async command Atm128Adcsra_t HplAtm128Adc.getAdcsra() { 
  async command uint16_t HplAtm128Adc.getValue() { 
  DEFINE_UNION_CAST(Admux2int, Atm128Admux_t, uint8_t);
  //=== Direct write of HW registers. ================================
  async command void HplAtm128Adc.setAdmux( Atm128Admux_t x ) { 
  async command void HplAtm128Adc.setAdcsra( Atm128Adcsra_t x ) { 
    call McuPowerState.update();
    schedule_adc_read();
  }
  async command void HplAtm128Adc.setPrescaler(uint8_t scale){
  // Individual bit manipulation. These all clear any pending A/D interrupt.
  async command void HplAtm128Adc.enableAdc() {
    dbg("Hpl128AdcP","scheduling ADC read at %s\n",sim_time_string());
  async command void HplAtm128Adc.disableAdc() {
  async command void HplAtm128Adc.enableInterruption() { SET_BIT(ADCSRA, ADIE); }
  /* A/D status checks */
  async command bool HplAtm128Adc.isEnabled()     {       
  async command bool HplAtm128Adc.isStarted()     {
  async command bool HplAtm128Adc.isComplete()    {
  /* A/D interrupt handlers. Signals dataReady event with interrupts enabled */
  AVR_ATOMIC_HANDLER(SIG_ADC) {

  default async event void HplAtm128Adc.dataReady(uint16_t done) { }
      dbg("HplAtm128AdcP","AdcReadDatahandle event cancelled before signalling\n");
      switch(ADMUX & 7) {
	#ifdef PLATFORM_MICA2
		/*
		 *  Heard signal is equal to the signal strength of ambient noise
		  while (neighborEntry != NULL) {
		    }
		  Vrssi = (sigdBm + 49.2) / (float)(-51.3);
	   #endif
      /*Signal ADC DATA READY*/
  sim_event_t *allocate_adc_read() {
  }
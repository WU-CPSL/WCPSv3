/**
 * An HPL abstraction of USART1 on the MSP430.
 *
 * @author Jonathan Hui <jhui@archedrock.com>
 * @author Joe Polastre
 * @version $Revision: 1.1 $ $Date: 2009/10/13 10:19:26 $
 */

#include "msp430usart.h"

configuration HplMsp430UsciB0C {

  provides interface AsyncStdControl;
  provides interface HplMsp430UsciSpi;
  provides interface HplMsp430UsartInterrupts;

}

implementation {

  components HplMsp430UsciB0P as HplUsciBP;
  components HplMsp430GeneralIOC as GIO;
  components HplMsp430Usart0InterruptsP as IRQ;

  AsyncStdControl = HplUsciBP;
  HplMsp430UsciSpi = HplUsciBP;
  HplMsp430UsartInterrupts = IRQ.InterruptsB;

  HplUsciBP.SIMO -> GIO.SIMO0;
  HplUsciBP.SOMI -> GIO.SOMI0;
  HplUsciBP.UCLK -> GIO.UCLK0;

}

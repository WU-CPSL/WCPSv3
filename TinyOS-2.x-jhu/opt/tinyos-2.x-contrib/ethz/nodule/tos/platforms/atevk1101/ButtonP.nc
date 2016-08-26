/* $Id: ButtonP.nc,v 1.1 2008/03/09 15:30:41 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

generic module ButtonP()
{
  provides {
    interface Button;
  }
  uses {
    interface GeneralIO as Gpio;
    interface GpioInterrupt as Interrupt;
  }
}
implementation
{
  async command void Button.enable() {
    call Gpio.makeInput();
    call Interrupt.enableFallingEdge();
  }

  async command void Button.disable() {
    call Interrupt.disable();
  }

  async event void Interrupt.fired() {
    signal Button.pressed();
  }
}

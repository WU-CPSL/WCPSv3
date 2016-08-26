/* $Id: SystemLedP.nc,v 1.1 2007/12/08 17:38:30 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

module SystemLedP
{
  provides {
    interface Init;
    interface SystemLed;
  }
  uses {
    interface GeneralIO as Led;
  }
}
implementation
{
  command error_t Init.init() {
    atomic {
      call Led.makeOutput();
      call Led.set();
    }
    return SUCCESS;
  }

  async command void SystemLed.on() { call Led.clr(); }

  async command void SystemLed.off() { call Led.set(); }

  async command void SystemLed.toggle() { call Led.toggle(); }

  async command bool SystemLed.get() { return call Led.get(); }
}

/* $Id: SystemLed.nc,v 1.1 2007/12/08 17:38:30 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

interface SystemLed
{
  /**
   * Turn on system LED.
   */
  async command void on();

  /**
   * Turn off system LED.
   */
  async command void off();

  /**
   * Toggle system LED.
   */
  async command void toggle();

  /**
   * Get the current system LED setting.
   */
  async command bool get();
}

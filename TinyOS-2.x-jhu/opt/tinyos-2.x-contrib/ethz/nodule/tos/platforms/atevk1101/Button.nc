/* $Id: Button.nc,v 1.1 2008/03/09 15:30:39 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

interface Button
{
  async command void enable();

  async command void disable();

  async event void pressed();
}

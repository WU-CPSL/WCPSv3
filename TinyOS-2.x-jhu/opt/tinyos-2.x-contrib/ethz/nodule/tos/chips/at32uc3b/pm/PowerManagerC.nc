/* $Id: PowerManagerC.nc,v 1.1 2008/03/11 23:41:55 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

configuration PowerManagerC
{
  provides interface PowerManager;
}
implementation
{
  components PowerManagerP;
  PowerManagerP = PowerManager;
}

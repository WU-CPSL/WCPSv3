/* $Id: InterruptControllerC.nc,v 1.4 2008/03/11 23:41:55 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

configuration InterruptControllerC
{
  provides {
    interface Init;
    interface InterruptController;
  }
}
implementation
{
  components InterruptControllerP;
  InterruptControllerP = InterruptController;
  InterruptControllerP = Init;
}

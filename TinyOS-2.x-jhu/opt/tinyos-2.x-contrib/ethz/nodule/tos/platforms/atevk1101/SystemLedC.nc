/* $Id: SystemLedC.nc,v 1.1 2007/12/08 17:38:30 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

configuration SystemLedC
{
  provides interface SystemLed;
}
implementation
{
  components SystemLedP;
  SystemLed = SystemLedP;

  components PlatformSystemLedC;
  SystemLedP.Init <- PlatformSystemLedC.Init;
  SystemLedP.Led -> PlatformSystemLedC.Led;
}

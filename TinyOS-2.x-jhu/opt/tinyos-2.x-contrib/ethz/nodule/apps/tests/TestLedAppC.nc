/* $Id: TestLedAppC.nc,v 1.2 2007/12/08 17:47:24 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */  

configuration TestLedAppC
{
}
implementation
{
  components MainC, TestLedC;
  TestLedC -> MainC.Boot;

  components LedsC;
  TestLedC.Leds -> LedsC;

  components SystemLedC;
  TestLedC.SystemLed -> SystemLedC;
}

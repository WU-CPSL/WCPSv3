/* $Id: TestButtonAppC.nc,v 1.5 2008/03/09 15:43:52 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */  

configuration TestButtonAppC
{
}
implementation
{
  components MainC, TestButtonC;
  TestButtonC -> MainC.Boot;

  components LedsC;
  TestButtonC.Leds -> LedsC;

  components SystemLedC;
  TestButtonC.SystemLed -> SystemLedC;

  components ButtonC;
  TestButtonC.Button1 -> ButtonC.Button1;
  TestButtonC.Button2 -> ButtonC.Button2;
}

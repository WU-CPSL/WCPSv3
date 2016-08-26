configuration TestRssiC { }

implementation
{
  components MainC, NoLedsC, LedsC,
    new TimerMilliC() as Timer,
    ActiveMessageC as Radio,
    CC2420ControlC,
    TestRssiP;

  TestRssiP.Boot -> MainC.Boot;
  TestRssiP.Leds -> NoLedsC;
  TestRssiP.Timer -> Timer;
  TestRssiP.RadioSplitControl -> Radio;
  TestRssiP.ReadRssi -> CC2420ControlC;
}

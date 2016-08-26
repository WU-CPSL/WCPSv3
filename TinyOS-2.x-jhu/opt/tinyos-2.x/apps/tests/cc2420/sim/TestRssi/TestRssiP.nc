module TestRssiP
{
  uses {
    interface Boot;
    interface Leds;
    interface SplitControl as RadioSplitControl;
    interface Timer<TMilli> as Timer;
    interface Read<uint16_t> as ReadRssi;
  }
}

implementation
{
  message_t _msg;

  event void Boot.booted()
  {
    dbg("TestRssiP", "Boot.booted()\n");
    call RadioSplitControl.start();
  }

  event void RadioSplitControl.startDone(error_t error)
  {
    call Timer.startPeriodic(1024);
  }

  event void Timer.fired()
  {
    call ReadRssi.read();
  }

  event void ReadRssi.readDone(error_t result, uint16_t val)
  {
    dbg("TestRssiP", "ReadRssi.readDone: %d\n", (int16_t)val-45);
  }

  event void RadioSplitControl.stopDone(error_t error) { }
}

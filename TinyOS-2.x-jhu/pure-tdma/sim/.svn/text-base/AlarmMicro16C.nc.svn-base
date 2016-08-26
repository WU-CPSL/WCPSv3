generic configuration AlarmMicro16C()
{
	provides interface Alarm<TMicro, uint16_t>;
}
implementation
{
	components new AlarmMicro16P();
	components CounterMicro16C;
	components PlatformC;
	
	Alarm = AlarmMicro16P;
	AlarmMicro16P.Counter -> CounterMicro16C;
	PlatformC.SubInit -> AlarmMicro16P;
}

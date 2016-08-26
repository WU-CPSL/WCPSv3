generic configuration Alarm32khz16C()
{
	provides interface Alarm<T32khz, uint16_t>;
}
implementation
{
	components new AlarmMicro16C();
	components new TransformAlarmC(T32khz, uint16_t, TMicro, uint16_t, 5);
	components Counter32khz16C;
	
	Alarm = TransformAlarmC;
	TransformAlarmC.AlarmFrom -> AlarmMicro16C;
	TransformAlarmC.Counter -> Counter32khz16C;
}

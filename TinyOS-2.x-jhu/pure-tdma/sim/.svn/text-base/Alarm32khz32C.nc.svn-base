generic configuration Alarm32khz32C()
{
	provides interface Alarm<T32khz, uint32_t>;
}
implementation
{
	components new AlarmMicro16C();
	components new TransformAlarmC(T32khz, uint32_t, TMicro, uint16_t, 5);
	components Counter32khz32C;
	
	Alarm = TransformAlarmC;
	TransformAlarmC.AlarmFrom -> AlarmMicro16C;
	TransformAlarmC.Counter -> Counter32khz32C;
}
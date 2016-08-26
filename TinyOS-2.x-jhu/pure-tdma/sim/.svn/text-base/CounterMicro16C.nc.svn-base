configuration CounterMicro16C
{
	provides interface Counter<TMicro, uint16_t>;
}
implementation
{
	components CounterMicro16P;
	components PlatformC;
		
	Counter = CounterMicro16P;
	PlatformC.SubInit -> CounterMicro16P;
}

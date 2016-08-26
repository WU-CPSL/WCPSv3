configuration Counter32khz32C
{
	provides interface Counter<T32khz, uint32_t>;
}
implementation
{
	components CounterMicro16C;
	components new TransformCounterC(T32khz, uint32_t, TMicro, uint16_t, 5, uint16_t);
		
	Counter = TransformCounterC;
	TransformCounterC.CounterFrom -> CounterMicro16C;
}

configuration Counter32khz16C
{
	provides interface Counter<T32khz, uint16_t>;
}
implementation
{
	components CounterMicro16C;
	components new TransformCounterC(T32khz, uint16_t, TMicro, uint16_t, 5, uint8_t);
		
	Counter = TransformCounterC;
	TransformCounterC.CounterFrom -> CounterMicro16C;
}

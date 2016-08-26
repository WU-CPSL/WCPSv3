module CounterMicro16P
{
	provides interface Counter<TMicro, uint16_t>;
	provides interface Init;
}
implementation
{
	// Our microsecond "counter" is based on the simulator's global clock.
	// To convert between simulator ticks and microseconds, we need to account
	// for two things:
	//
	// 1.  The clocks tick at different rates.  The simulator's clock ticks at
	//     sim_ticks_per_sec() Hz; the microsecond clock we're simulating needs
	//     to tick at 1024 * 1024 Hz.
	//
	// 2.  The microsecond clock has some offset (t0) relative to the simulator
	//     clock, because the node did not necessarily boot at sim_time() == 0.
	// 
	// Additionally, the TinyOS Counter interface requires us to notify clients
	// of any overflows in the counter.  This happens every UINT16_MAX counter
	// ticks.  We handle this by scheduling an event at an interval of
	// UINT16_MAX microseconds (see scheduleOverflow()) which does all the
	// bookkeeping.

	sim_time_t t0;
	
	void scheduleOverflow();
	void handleOverflow(sim_event_t * evt);
	
	command error_t Init.init()
	{
		t0 = sim_time();
		scheduleOverflow();
		return SUCCESS;
	}
	
	void scheduleOverflow()
	{
		sim_time_t nextOverflow = t0 + UINT16_MAX * sim_ticks_per_sec() / 1024UL / 1024UL;
		
		sim_event_t * overflowEvent = sim_queue_allocate_event();
		overflowEvent->handle = handleOverflow;
		overflowEvent->cleanup = sim_queue_cleanup_none;
		overflowEvent->time = nextOverflow;
		sim_queue_insert(overflowEvent);
	}
	
	void handleOverflow(sim_event_t * evt)
	{
		t0 = sim_time();
		scheduleOverflow();
		signal Counter.overflow();
	}	
	
	async command uint16_t Counter.get()
	{
		return (sim_time() - t0) * 1024UL * 1024UL / sim_ticks_per_sec();
		
		//return (sim_time() - t0) * 1000UL * 1000UL / sim_ticks_per_sec();
	}
	
	async command bool Counter.isOverflowPending() { return FALSE; }
	async command void Counter.clearOverflow() { }
}

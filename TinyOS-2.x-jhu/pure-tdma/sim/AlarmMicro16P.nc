generic module AlarmMicro16P()
{
	provides interface Alarm<TMicro, uint16_t>;
	uses interface Counter<TMicro, uint16_t>;
	provides interface Init;
}
implementation
{
	uint16_t alarm = 0;
	sim_time_t zero = 0;
	sim_event_t * evt = NULL;
	
	command error_t Init.init()
	{
		zero = sim_time();
		return SUCCESS;
	}
	
	void handle_timer_fired(sim_event_t * e)
	{
		if(e->cancelled)
			return;
		
		signal Alarm.fired();
	}	
	
	async command uint16_t Alarm.getAlarm() 
	{
		return alarm;
	}
	
	async command uint16_t Alarm.getNow()
	{
		return call Counter.get();
	}
	
	async command bool Alarm.isRunning() 
	{
		return evt != NULL;
	}
	
	async command void Alarm.stop()
	{
		if(call Alarm.isRunning())
		{
			evt->cancelled = 1;
			evt->cleanup = sim_queue_cleanup_total;

			evt = NULL;
		}
	}
	
	async command void Alarm.start(uint16_t dt)
	{
		call Alarm.startAt(call Alarm.getNow(), dt);
	}
	
	async command void Alarm.startAt(uint16_t t0, uint16_t dt)
	{
		sim_event_t * newEvt;
		sim_time_t fireAt;
		
		call Alarm.stop();
		alarm = t0 + dt;
		fireAt = zero + ((t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL);
		
		
		//below changed by Bo to make sure the nesc alarm follows tossim tick clocks, otherwise the TDMA will have slot shift due to the alarm 1024 instead of 1000
		//fireAt = zero + ((t0 + dt) * sim_ticks_per_sec() / 1000UL / 1000UL);
		
		newEvt = sim_queue_allocate_event();
		newEvt->handle = handle_timer_fired;
		newEvt->cleanup = sim_queue_cleanup_none;
		newEvt->time = (fireAt > sim_time()) ? fireAt : sim_time();
		
		evt = newEvt;
		sim_queue_insert(newEvt);
	}
	
	async event void Counter.overflow()
	{
		zero = sim_time();
	}
}
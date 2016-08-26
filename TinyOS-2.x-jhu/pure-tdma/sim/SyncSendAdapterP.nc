module SyncSendAdapterP @safe()
{
	uses interface AMSend[am_id_t id];
	uses interface SplitControl;
	provides interface AsyncSend;
	provides interface RadioPowerControl;
}
implementation
{
	tossim_header_t * getHeader(message_t * msg)
	{
		return &((message_header_t *)(msg->header))->tossim;
	}
  
  	async command error_t AsyncSend.send(message_t * msg, uint8_t len)
	{
		return call AMSend.send[getHeader(msg)->type](getHeader(msg)->dest, msg, len);
	}
	
	async command error_t AsyncSend.cancel(message_t * msg)
	{
		return call AMSend.cancel[getHeader(msg)->type](msg);
	}

	event void AMSend.sendDone[am_id_t id](message_t * msg, uint8_t len)
	{
		signal AsyncSend.sendDone(msg, len);
	}
	
	async command uint8_t AsyncSend.maxPayloadLength()
	{
		return call AMSend.maxPayloadLength[0]();
	}
	
	async command void * AsyncSend.getPayload(message_t * msg, uint8_t len)
	{
		return call AMSend.getPayload[getHeader(msg)->type](msg, len);
	}
	
	async command error_t RadioPowerControl.start() { return call SplitControl.start(); }
	async command error_t RadioPowerControl.stop() { return call SplitControl.stop(); }
	event void SplitControl.startDone(error_t err) { signal RadioPowerControl.startDone(err); }
	event void SplitControl.stopDone(error_t err) { signal RadioPowerControl.stopDone(err); }
}

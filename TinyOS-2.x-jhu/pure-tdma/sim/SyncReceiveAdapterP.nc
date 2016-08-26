module SyncReceiveAdapterP @safe()
{
	uses interface Receive[am_id_t id];
	provides interface AsyncReceive;
}
implementation
{
	event message_t * Receive.receive[am_id_t id](message_t * msg, void * payload, uint8_t len)
	{
		message_t * duplicate = malloc(sizeof(message_t));
		memcpy(duplicate, msg, sizeof(message_t));
		
		signal AsyncReceive.receive(duplicate, payload, len);
		return msg;
	}
	
	command void AsyncReceive.updateBuffer(message_t * msg)
	{
		free(msg);
	}
}

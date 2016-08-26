configuration SyncAdapterC
{
	uses interface Receive[am_id_t id];
	uses interface AMSend[am_id_t id];
	uses interface SplitControl;
	
	provides interface AsyncReceive;
	provides interface AsyncSend;
	provides interface RadioPowerControl;
}
implementation
{
	components SyncReceiveAdapterP as RecvAdapter, SyncSendAdapterP as SendAdapter;

	Receive = RecvAdapter;	
	AMSend = SendAdapter;
	SplitControl = SendAdapter;
	
	RecvAdapter.AsyncReceive = AsyncReceive;
	SendAdapter.AsyncSend = AsyncSend;
	RadioPowerControl = SendAdapter;
}
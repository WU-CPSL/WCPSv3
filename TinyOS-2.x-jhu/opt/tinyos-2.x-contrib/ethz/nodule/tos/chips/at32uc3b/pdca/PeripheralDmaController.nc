/* $Id: PeripheralDmaController.nc,v 1.1 2008/03/09 15:49:57 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

interface PeripheralDmaController
{
  async command void registerInterruptHandler(void * callback);

  async command uint32_t getTransferCounter();
  
  async command void startupTransaction(void * buf, uint16_t len, bool enable_int);

  async command error_t shutdownTransaction();
}

/* $Id: InterruptController.nc,v 1.3 2008/03/11 23:41:55 yuecelm Exp $ */

/* @author Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

interface InterruptController
{
  async command void registerGpioInterruptHandler(uint8_t gpio, void * handler);

  async command void registerPdcaInterruptHandler(uint8_t pdca, void * handler);

  /* USART handler must tagged with __attribute__((interrupt, section(".interrupt"))) */
  async command void registerUsartInterruptHandler(uint8_t usart, void * handler);

  /* PM handler must tagged with __attribute__((interrupt, section(".interrupt"))) */
  async command void registerPmInterruptHandler(void * handler);
}

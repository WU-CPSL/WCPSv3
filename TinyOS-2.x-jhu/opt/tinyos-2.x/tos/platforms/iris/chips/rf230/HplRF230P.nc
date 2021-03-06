/*
 * Copyright (c) 2007, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Author: Miklos Maroti
 */

#include <util/crc16.h>
#include "Atm128Spi.h"

module HplRF230P
{
	provides
	{
		interface GpioCapture as IRQ;
		interface Init as PlatformInit;

		interface HplRF230;
	}

	uses
	{
		interface HplAtm128Capture<uint16_t> as Capture;
		interface GeneralIO as PortCLKM;
		interface GeneralIO as PortIRQ;
	}
}

implementation
{
	command error_t PlatformInit.init()
	{
		call PortCLKM.makeInput();
		call PortCLKM.clr();
		call PortIRQ.makeInput();
		call PortIRQ.clr();
		call Capture.stop();

		return SUCCESS;
	}

	async event void Capture.captured(uint16_t time)
	{
		time = call Capture.get();	// TODO: ask Cory why time is not the captured time
		signal IRQ.captured(time);
	}

	default async event void IRQ.captured(uint16_t time)
	{
	}

	async command error_t IRQ.captureRisingEdge()
	{
		call Capture.setEdge(TRUE);
		call Capture.reset();
		call Capture.start();
	
		return SUCCESS;
	}

	async command error_t IRQ.captureFallingEdge()
	{
		// falling edge comes when the IRQ_STATUS register of the RF230 is read
		return FAIL;	
	}

	async command void IRQ.disable()
	{
		call Capture.stop();
	}

	// TODO: Check why the default crcByte implementation is in a different endianness
	inline async command uint16_t HplRF230.crcByte(uint16_t crc, uint8_t data)
	{
		return _crc_ccitt_update(crc, data);
	}

	inline async command void HplRF230.spiSplitWrite(uint8_t data)
	{
		// the SPI must have been started, so do not waste time here
		// SET_BIT(SPCR, SPE);

		SPDR = data;
	}

	inline async command uint8_t HplRF230.spiSplitRead()
	{
	    while( !( SPSR & 0x80 ) )
			;
		return SPDR;
	}

	inline async command uint8_t HplRF230.spiSplitReadWrite(uint8_t data)
	{
		uint8_t b;

	    while( !( SPSR & 0x80 ) )
			;
		b = SPDR;
		SPDR = data;

		return b;
	}

	inline async command uint8_t HplRF230.spiWrite(uint8_t data)
	{
		// the SPI must have been started, so do not waste time here
		// SET_BIT(SPCR, SPE);

		SPDR = data;
	    while( !( SPSR & 0x80 ) )
			;

		return SPDR;
	}
}

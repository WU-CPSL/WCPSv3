/*
 * Copyright (c) 2014 CPSL wustl.
 * All rights reserved.
 *
 * Local wrappers for TossimComPrintf
 *
 * @author Bo Li <regitli@gmail.com>
 * @date   Oct, 2014
 */
#include <stdio.h>
#include <printfWr.h>

module TossimComPrintfP{
    provides
    {
        interface TossimComPrintfWrite;
        interface TossimComPrintfRead;
    }
}

implementation{

	command uint8_t TossimComPrintfWrite.printfWrite(uint8_t flow, uint8_t slot, uint8_t source, uint8_t node_id, uint8_t channel){
		return printfWr(flow, slot, source, node_id, channel);
    }
    
    command int* TossimComPrintfRead.printfRead(uint8_t flow, uint8_t slot, uint8_t source, uint8_t node_id, uint8_t channel){
		return printfRd(flow, slot, source, node_id, channel);
    }
}
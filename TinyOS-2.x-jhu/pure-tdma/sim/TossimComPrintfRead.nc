/*
 * Copyright (c) 2014 CPSL wustl.
 * All rights reserved.
 *
 * Local wrappers for TossimComPrintf
 *
 * @author Bo Li <regitli@gmail.com>
 * @date   Oct, 2014
 */

interface TossimComPrintfRead{
	command int* printfRead(uint8_t flow, uint8_t slot, uint8_t source, uint8_t node_id, uint8_t channel);
}
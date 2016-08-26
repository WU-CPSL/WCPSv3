/*
 * Copyright (c) 2014 CPSL wustl.
 * All rights reserved.
 *
 * Local wrappers for TossimComPrintf
 *
 * @author Bo Li <regitli@gmail.com>
 * @date   Oct, 2014
 */

configuration TossimComPrintfC {
	provides {
		interface TossimComPrintfWrite;
		interface TossimComPrintfRead;
	}
}

implementation {
	components TossimComPrintfP;
	TossimComPrintfWrite = TossimComPrintfP;
	TossimComPrintfRead = TossimComPrintfP;
}
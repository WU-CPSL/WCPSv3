// $Id$
/*
 * Copyright (c) 2014 CPSL wustl.
 * All rights reserved.
 */

/**
 * Local wrappers for TDMA schedule reader.
 *
 * @author Bo Li <regitli@gmail.com>
 * @date   Jan, 2013
 */


configuration TdmaScheduleC {
	provides {
		interface tdmaScheduleFetch;
	}
}

implementation {
	components TdmaScheduleP;
	tdmaScheduleFetch = TdmaScheduleP;
}
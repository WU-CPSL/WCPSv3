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

#include <stdio.h>   /* required for file operations */
#include <tdma_schedule.h>

module TdmaScheduleP
{
    provides
    {
        interface tdmaScheduleFetch;
    }
}
implementation
{
	command int* tdmaScheduleFetch.tsFetch()
    {
		return ts_read();
    }
}
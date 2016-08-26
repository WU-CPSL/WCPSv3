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

//#include <tdma_schedule.h>
#include <stdio.h>   /* required for file operations */
#include <stdlib.h>
#include <unistd.h>

FILE *fr;            /* declare the file pointer */
int schedule[100][5];
int numSlots;

int* ts_read(){
	int i = 0;
    fr=fopen("tdma_schedule.txt", "r+");
    fscanf(fr, "%d", &numSlots); //get number of slots
    schedule[0][0]=numSlots; // assign number of slots to very first element (0 row, 0 column) in schedule array.
    for(i=1; i<=numSlots; i++){
    //get schedule in the format of: slot sender receiver.
		fscanf(fr, "%d %d %d %d %d", &schedule[i][0], &schedule[i][1], &schedule[i][2], &schedule[i][3], &schedule[i][4]); 
	}
   fclose(fr);
   return schedule;
}
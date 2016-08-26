#include <stdio.h>   /* required for file operations */
#include <stdlib.h>
#include <unistd.h>

FILE *fw; // this might cause some problem, as we met last time
FILE *fr;            /* declare the file pointer */
int emergency_status[5];

int printfWr(int flow, int slot, int source, int node_id, int channel){	
	if (node_id == 161){
		fw=fopen("161.txt", "w+");
		fprintf(fw, "%d, %d, %d, %d, %d", flow, slot, source, node_id, channel);
	}else if (node_id == 169){
		fw=fopen("169.txt", "w+");
		fprintf(fw, "%d, %d, %d, %d, %d", flow, slot, source, node_id, channel);
	}else if (node_id == 157){
		fw=fopen("157.txt", "w+");
		fprintf(fw, "%d, %d, %d, %d, %d", flow, slot, source, node_id, channel);
	}else if (node_id == 180){
		fw=fopen("180.txt", "w+");
		fprintf(fw, "%d, %d, %d, %d, %d", flow, slot, source, node_id, channel);
	}
	fclose(fw);
	return(0);
};


int* printfRd(flow, slot, source, node_id, channel){
	fr=fopen("emergency.txt", "r+");
	fscanf(fr, "%d %d %d %d", &emergency_status[0], &emergency_status[1], &emergency_status[2], &emergency_status[3]); 
	fclose(fr);
	return emergency_status;
};
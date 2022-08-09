//  AUTHOR: JFITECH
//  PURPOSE: READING FROM A FILE - FORMATTED STRINGS
// 	DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>



int main(void){
	FILE *fp = NULL;
	
	fp = fopen("file.txt", "w+");	
	
	if(fp != NULL)
		fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);
	
	fclose(fp);
	fp = NULL;
	
	return(0);
}
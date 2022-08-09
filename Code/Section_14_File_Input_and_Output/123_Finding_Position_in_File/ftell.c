//  AUTHOR: JFITECH
//  PURPOSE: FINDING POSITION IN A FILE - ftell()
// 	DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


int main(void){
	FILE *fp = NULL;
	int len = 0;

	fp = fopen("file.txt", "r");
	if(fp == NULL){
		perror("Error opening file.");
		return(-1);
	}

	// THIS GOES TO THE END OF THE FILE
	fseek(fp, 0, SEEK_END);

	len = ftell(fp);
	fclose(fp);

	printf("\nTotal size of file.txt = %d bytes\n", len);

	return(0);
}
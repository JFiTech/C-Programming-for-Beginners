//  AUTHOR: JFITECH
//  PURPOSE: READING FROM A FILE - STRINGS
// DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


#include <stdio.h>

int main(void){
	FILE *fp;
	char str[60];
	
	// OPENING FILE FOR READING
	fp = fopen("file.txt", "r");
	
	if(fp == NULL){
		perror("Error opening file.");
		return(-1);
	}
	
	if(fgets (str, 60, fp) != NULL){
		// WRITING CONTENT TO stdout
		printf("%s", str);
	}
	
	fclose(fp);
	fp = NULL;
	
	return(0);
}
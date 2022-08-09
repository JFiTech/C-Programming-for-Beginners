//  AUTHOR: JFITECH
//  PURPOSE: READING FROM A FILE
// DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


int main(){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("file.txt", "r");
	
	if(fp == NULL){
		perror("Error in opening file");	
		return(-1);
	}
	
	// READ A SINGLE CHAR 
	while((c = fgetc(fp)) != EOF);
		printf("%c", c);
		
	fclose(fp);
	fp = NULL;

    //system("pause");
	return(0);
}
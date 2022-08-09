//  AUTHOR: JFITECH
//  PURPOSE: CHALLENGE 19TH - FIND THE AMOUNT OF LINES IN A FILE
// 	DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


void main(void){
	FILE *pFile = NULL;
	int counter = 0;
	char character; 

	// OPEN FILE
	pFile = fopen("myFile.txt", "r");
	
	// CHECK IF THE POINTER IS NULL
	if(pFile == NULL){
		perror("Error in opening file.");
		exit(-1);
	}

	// READ EVERY CHAR UNTIL IT HITS THE LINE FEED CHARACTER
	while((character = fgetc(pFile)) != EOF){
		if(character == '\n')
			counter++;
	}

	// CLOSE THE FILE
	fclose(pFile);
	pFile = NULL;

	printf("\nThe amount of lines in the file is: %d\n", ++counter);

	return;
}
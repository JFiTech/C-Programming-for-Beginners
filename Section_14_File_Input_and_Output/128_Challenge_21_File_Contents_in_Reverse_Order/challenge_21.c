//  AUTHOR: JFITECH
//  PURPOSE: CHALLENGE 21st - PRINT CONTENTS OF FILE IN REVERSE ORDER
// 	DATE: MAY 18TH, 2022


#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>



void main(void){
	FILE *pFile = NULL;
	int c = 0, i = 0;

	// OPEN THE FILE
	pFile = fopen("myFile.txt", "r");

	// CHECK IF THE FILE POINTER IS NULL
	if(pFile == NULL){
		perror("Error opening file.");
		exit(-1);
	}

	
	// MOVE THE POSITION TO THE END OF THE FILE
	fseek(pFile, 0, SEEK_END);

	// WILL TELL US THE AMOUNT OF BYTES IN THE FILE
	long fPos = ftell(pFile);
	
	// READ THE FILE'S CHARACTERS
	// while((c = fgetc(pFile)) != EOF)
	// 	c--;
	// 	printf("%c", c);

	//
	while(i < fPos){
		i++;
		fseek(pFile, -i, SEEK_END);	// SEEK SO MANY BYTES FROM THE END, WHICH -i FROM THE END
		printf("%c", fgetc(pFile));	// READ IN THE CHARACTER AND PRINT IT OUT
	}

	printf("\n");

	// CLOSE THE FILE
	fclose(pFile);
	pFile = NULL;


	return;
}
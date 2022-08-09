//  AUTHOR: JFITECH
//  PURPOSE: CHALLENGE 20TH - CONVERT CHARACTER TO ALL UPPERCASE
// 	DATE: MAY 17TH, 2022


#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>



void main(void){
	FILE *pFile = NULL, *pTempFile = NULL;
	char c; // EACH CHARACTER

	// OPEN, READ  AND WRITE FILES
	pFile = fopen("myFile.txt", "r");
	pTempFile = fopen("tempFile.txt", "w+");

	// CHECK IF EITHER POINTER IS NULL
	if(pFile == NULL || pTempFile == NULL){
		perror("Error in opening file.");
		exit(-1);
	}

	// READ EVERY CHAR IN THE ORIGINAL FILE
	while((c = fgetc(pFile)) != EOF){
		if(islower(c)) {
			// CONVERT EACH CHARACTER TO UPPERCASE
			c = c - 32;
		}
		// COPY EVERY CHARACTER TO THE TEMP FILE
		fputc(0, pTempFile);
	}

	// CLOSE THE FILES
	fclose(pFile);
	fclose(pTempFile);

	// RENAME THE TEMPORARY FILE
	rename("tempFile.txt", "myFile.txt");

	// REMOVE THE TEMPORARY FILE
	remove("tempFile.txt");

	// OPEN THE RENAMED FILE TO READ
	pFile = fopen("myFile.txt", "r");

	// CHECK IF THE POINTER IS NULL
	if(pFile == NULL){
		perror("Error in opening file.");
		exit(-1);
	}

	// ITERATE THROUGH EACH CHARACTER AND PRINT IT
	while((c = fgetc(pFile)) != EOF)
		// READ THE CONTENTS OF THE FILE
		printf("%c", c);

	// CLOSE THE LAST OPENED FILE
	fclose(pFile);


	pFile = NULL;
	pTempFile = NULL;


	return;
}
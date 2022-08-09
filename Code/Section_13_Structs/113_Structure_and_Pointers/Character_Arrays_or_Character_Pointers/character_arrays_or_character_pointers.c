/*
	AUTHOR: JFITECH
	PURPOSE: STRUCTS AND POINTERS
	DATE: MAY 5TH, 2022
*/


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 50

// STRUCT DEFINITION
struct nameCount{
	char *fname;	// USING POINTERS INSTEAD OF ARRAYS
	char *lname;
	int letters;
};


// getInfo FUNCTION
void getInfo(struct nameCount *pst){
	char temp[SLEN];
	printf("Please enter your first name:\n");
	gets_s(temp, SLEN);
	
	// ALLOCATE MEMORY TO HOLD NAME
	pst->fname = (char *) malloc(strlen(temp) + 1);
	
	// COPY NAME TO ALLOCATED MEMORY
	strcpy(pst->fname, temp);
	printf("Please enter your last name:\n");
	gets_s(temp, SLEN);
	pst->lname = (char *) malloc(strlen(temp) + 1);
	strcpy(pst->lname, temp);
}
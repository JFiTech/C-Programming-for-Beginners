/*
	AUTHOR: JFITECH
	PURPOSE: MALLOC & REALLOC
	DATE: MAY 3RD, 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char *str = NULL;
	
	// INITIAL MEMORY ALLOCATION
	str = (char *) malloc(15 * sizeof(char));
	strcpy(str, "Juls");
	printf("String = %s, Address = %u\n", str, str);
	
	// REALLOCATING MEMORY
	str = (char *)realloc(str, 25 * sizeof(char));
	strcat(str, ".com");
	printf("String = %s, Address = %u\n", str, str);
	
	// FREE THE MEMORY
	free(str);
	str = NULL;

	return(0);
}
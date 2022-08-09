/*
	AUTHOR: JFITECH
	PURPOSE: ACCESSING POINTERS
	DATE: MAY 1ST, 2022
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
	int number = 0; 	// A VARIABLE OF TYPE int INITIALIZED TO 0
	int *pnumber = NULL;	// A POINTER THAT CAN POINT TO TYPE int
	
	number = 10;
	printf("number's address: %p\n", &number); // OUTPUT THE ADDRESS
	printf("number's value: %d\n\n", number);	// OUTPUT THE VALUE
	
	pnumber = &number;	// STORE THE ADDRESS OF number on pnumber
	
	printf("pnumber's address: %p\n", (void*)&pnumber); // OUTPUT THE ADDRESS
	printf("pnumber's size: %zd bytes\n", sizeof(pnumber)); // OUTPUT THE SIZE
	printf("pnumber's value: %p\n", pnumber); // OUTPUT THE VALUE (AN ADDRESS)
	printf("value pointed to: %d\n", *pnumber); // VALUE AT THE ADDRESS
		
	return;
}
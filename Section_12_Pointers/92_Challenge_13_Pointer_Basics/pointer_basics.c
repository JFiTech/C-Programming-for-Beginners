/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 13 - POINTER BASICS
	DATE: MAY 1ST, 2022
*/


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
    int number = 7;
    int *pnumber = NULL;

    pnumber = &number; // ASSIGN number'S ADDRESS TO pnumber

    printf("\nnumber's address is: %p", &number);
    printf("\nThe pointer's address is: %p", (void*)&pnumber); // OUTPUT pnumber'S ADDRESS
    printf("\nThe pointer's value is: %p", pnumber);
    printf("\nThe value of what the pointer is pointing to is: %d\n", *pnumber);

    return;
}
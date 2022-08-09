/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 16 - DYNAMIC MEMORY ALLOCATION
	DATE: MAY 3RD, 2022
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


void main(void){
    // VARIABLE DECLARATION
    char *pString = NULL;
    int byteAmount = 0;

    printf("\nPlease enter the amount of bytes that you wish to allocate: ");
    scanf("%d", &byteAmount);


    // DYNAMIC MEMORY ALLOCATION
    pString = (char*)calloc(byteAmount, sizeof(char));
    

    // VALIDATE IF IT CAN ALLOCATE MEMORY
    if (pString != NULL){
        printf("\nPlease enter the string: ");
        scanf("%s", pString);
        // PRINT INPUT TEXT
        printf("\nThe text is: %s", pString);
    }
    

    // FREE MEMORY
    free(pString);
    pString = NULL;

    return;
}
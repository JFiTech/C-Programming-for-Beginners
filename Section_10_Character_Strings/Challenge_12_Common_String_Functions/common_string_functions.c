/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 12 - COMMON STRING FUNCTIONS - MY SOLUTION
	DATE: APRIL 15TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// FUNCTION PROTOTYPES
char reverseString(const char string[]); // REVERSE STRING FUNCTION


// MAIN FUNCTION
void main(void){
    // VARIABLES DECLARATION
    char string1[30];

    // REQUEST USER INPUT
    printf("\nPlease enter the string to be reversed: ");
    scanf("%s", string1);

    // int stringLength = strlen(string1);

    // printf("\n--> The size of the string is: %d", stringLength, "<--\n")

    printf("\nThe string %s in reverse order is: ", reverseString(string1));

    return;
}


// REVERSE STRING FUNCTION
char reverseString(const char string[]){
    // VARIABLES DECLARATION
    int i = 0;
    int stringLength  = strlen(string);
    char reversedString[stringLength];

    while (string[i] != '\0'){
        reversedString[stringLength] = string[i];
        reversedString[stringLength - 1];
    }

    return reversedString; 
}
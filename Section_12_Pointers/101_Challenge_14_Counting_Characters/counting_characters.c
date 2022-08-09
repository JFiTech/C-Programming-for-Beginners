/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 14 - COUNTING CHARACTERS IN A STRING
	DATE: MAY 2ND, 2022
*/

#include <stddef.h>
#include <stdio.h>


// FUNCTION PROTOTYPES
int strnLen(const char *strnArray);


// MAIN FUNCTION
void main(void){
    char string[] = "Hallo, jeg snakker litt norsk!";

    printf("\nThe length of the string is: %d", strnLen(string));

    return;
}


// strnLen FUNCTION
int strnLen(const char *strnArray){
    // DECLARE VARIABLES
    int length;
    const char *arrayEnd = strnArray;

    while(*arrayEnd)
        *arrayEnd++;

    return arrayEnd - strnArray;
}
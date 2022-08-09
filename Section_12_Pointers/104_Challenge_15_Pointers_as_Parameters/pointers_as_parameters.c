/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 15 - USING POINTERS AS PARAMETERS
	DATE: MAY 3RD, 2022
*/


#include <stdio.h>


// FUNCTION PROTOTYPES
void square(int *ptr);


// MAIN FUNCTION
void main(void){
    int myInt = 5;

    printf("\nThe original value is: %d\n", myInt);


    // 'PASS BY REFERENCE' FUNCTION
    square(&myInt);

    printf("\nThe value after 'pass by reference' is: %d\n", myInt);

    return;
}


// SQUARE FUNCTION
void square(int *ptr){
    int squaredValue = *ptr;

    squaredValue *= squaredValue;
    
    *ptr = squaredValue;

    /* CAN ALSO BE DONE MORE EFFICIENTLY AS:
        *ptr = (*ptr) * (*ptr);
    */
}
/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM SHOWS US BITWISE OPERATORS
	DATE: MARCH 3RD, 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    //WE'RE GONNA CREATE A COUPLE UNSIGNED VARIABLE
    unsigned int a = 60; // GONNA BE REPRESENTED IN BINARY AS 0000 0000 0000 0000 0000 0000 0011 1100 (INVERSE ORDER, LEFT TO RIGHT)
    unsigned int b = 13; // GONNA BE REPRESENTED IN BINARY AS 0000 1101 (INVERSE ORDER, LEFT TO RIGHT)
    int result = 0; 

    result = a >> 4; // --> 0000 0011

    printf("\nThe result is: %d", result);

    return 0;
}
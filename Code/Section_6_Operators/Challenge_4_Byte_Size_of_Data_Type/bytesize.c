/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM PRINTS OUT THE BYTE SIZE OF THE BASIC DATA TYPES TO THE SCREEN.
	DATE: MARCH 5TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // INT
    printf("\nThe byte size of an int is: %zd", sizeof(int));
    
    // CHAR
    printf("\nThe byte size of a char is: %zd"), sizeof(char) ;
    
    // LONG
    printf("\nThe byte size of a long is: %zd", sizeof(long));
    
    // LONG LONG
    printf("\nThe byte size of a long long is: %zd", sizeof(long long));
    
    // DOUBLE
    printf("\nThe byte size of a double is: %zd", sizeof(double));
    
    // LONG DOUBLE
    printf("\nThe byte size of a long double is: %zd\n", sizeof(long double));

    return 0;
}
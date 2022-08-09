/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM DEMONSTRATES A FOR LOOP IN C
	DATE: MARCH 7TH, 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    // DECLARE VARIABLES
    unsigned long long sum = 0; // STORES THE SUM OF INTEGERS
    unsigned int count = 0; // THE NUMBER OF INTEGERS TO BE SUMMED

    // READ THE NUMBER OF INTEGERS TO BE SUMMED
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    // SUM INTEGERS FROM 1 TO COUNT
    // for(unsigned int i = 1; i <= count; ++i);
    //     sum += i;

    // OR
    for(unsigned int i = 1; i <= count; sum += i++);
    
    printf("\nTotal of the first %u numbers is %u\n", count, sum);

    return 0;
}
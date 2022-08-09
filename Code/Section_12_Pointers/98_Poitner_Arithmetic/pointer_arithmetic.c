/*
	AUTHOR: JFITECH
	PURPOSE: POINTER ARITHMETIC
	DATE: MAY 2ND, 2022
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


// FUNCTION PROTOTYPES
int arraySum(int *ptr, const int n);

// main FUNCTION
void main(void){
    // VARIABLE DECLARATION
	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
	
	printf("The sum is %i\n", arraySum(values, 10)); // THE SECOND ARGUMENT ON THE FUNCTION IS THE ARRAY'S SIZE
}

// arraySum FUNCTION
int arraySum(int *ptr, const
 int n){
	// VARIABLE DECLARATION
    int sum = 0;
	
	int * const arrayEnd = ptr + n;   // int * const MEANS THAT POINTER ADDRESS CANNOT BE CHANGED
                                        //  WE DO THIS BECAUSE IT MAKES OUR LOOP MORE EFFICIENT
                                        // arrayEnd IS POINTING TO THE ADDRESS OF THE END OF THE ARRAY
	
	for ( ; ptr < arrayEnd; ++ptr)
		sum += *ptr;
		
	return sum;
}
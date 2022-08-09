/*
	AUTHOR: JFITECH
	PURPOSE: USING POINTERS
	DATE: MAY 1ST, 2022
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
    long num1 = 0L;
	long num2 = 0L;
	long *pNum = NULL;

	pNum = &num1;	// GET ADDRESS OF num1
	*pNum = 2L;	// SET num1 to 2
	++num2;	// INCREMENT num2
	num2 += *pNum;	// ADD num1 TO num2

	pNum = &num2;	//GET ADDRESS OF num2
	++*pNum;	// INCREMENT num2 DIRECTLY

	printf("\nnum1 = %ld\nnum2 = %ld\n*pNum = %ld\n*pnum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);

    return;
}

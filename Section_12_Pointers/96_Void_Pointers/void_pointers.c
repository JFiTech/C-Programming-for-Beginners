/*
	AUTHOR: JFITECH
	PURPOSE: VOID POINTERS
	DATE: MAY 1ST, 2022
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr = NULL;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);

    return;
}

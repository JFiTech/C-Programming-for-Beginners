/*
	AUTHOR: JFITECH
	PURPOSE: STRUCTS AND POINTERS
	DATE: MAY 5TH, 2022
*/


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


// STRUCT DEFINITION
struct date{
	int month;
	int day;
	int year;
};


// MAIN FUNCTION
void main(void){
    struct date today, *datePtr = NULL;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("\nToday's date is %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year % 100);

    return;
}
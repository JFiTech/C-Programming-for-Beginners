/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM PRINTS OUT THE EQUIVALENT OF GIVEN MINUTES TO DAYS AND YEARS TO THE SCREEN.
	DATE: MARCH 5TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // DECLARE VARIABLES
    double minutes, days, years, minutesInYears, minutesInDays;

    // REQUEST USER INPUT
    printf("\nEnter the minutes that you wish to convert: ");
    scanf("%g", &minutes);

    minutesInDays = minutes / 1440;


    
    

    printf("\nThe amount of given minutes in days is: %g\n", minutesInDays);
    //printf("\nThe amount of given minutes in years is: %f", minutesInYears);

    return 0;
}
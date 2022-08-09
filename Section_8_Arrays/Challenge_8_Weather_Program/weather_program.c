/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 8 - SIMPLE WEATHER PROGRAM - MY SOLUTION
	DATE: MARCH 21ST, 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    // DECLARE VARIABLES
    float rainfallValues[5][12] = { // INITIALIZE 2D MATRIX WITH HARD CODED VALUES
        {11.5, 12.5, 4.3, 7.4, 7.2, 3.2, 7.6, 1.2, 5.4, 4.3, 5.3, 4.5}, // TOTAL = 74.4
        {1.2, 4.3, 5.4, 6.5, 3.4, 6.8, 5.3, 7.6, 6.4, 7.9, 0.5, 8.9}, // TOTAL = 64.2
        {0.3, 0.5, 3.2, 5.6, 7.5, 4.5, 3.5, 2.0, 2.1, 4.9, 9.1, 8.2}, // TOTAL = 51.4
        {12.4, 2.3, 5.3, 7.1, 1.0, 3.0, 5.0, 6.0, 9.3, 8.2, 7.9, 1.9}, // TOTAL = 69.4
        {8.5, 4.6, 3.7, 2.4, 3.7, 1.2, 5.3, 7.9, 2.1, 2.0, 3.4, 5.7} // TOTAL = 50.5
    }; //1ST COLUMN TOTAL = 33.9
       //2ND COLUMN TOTAL = 24.2
       //3RD COLUMN TOTAL = 21.9

    float totalYearlyRainfall[5];
    float totalMonthlyRainfall[12];

    printf("\n\n***TOTAL & AVERAGE YEARLY RAINFALL***");

    // LOOP TO FIND THE TOTAL YEARLY RAINFALL
    for(int i = 0; i < 5; ++i) {
            for(int j = 0; j < 12; ++j) {
                totalYearlyRainfall[i] += rainfallValues[i][j];
            }
        printf("\n\nThe total yearly rainfall is: %.2f", totalYearlyRainfall[i]);
        printf("\n\nThe average yearly rainfall is: %.2f", totalYearlyRainfall[i] / 5);
        printf("\n\n=====================================================================");
    }

    printf("\n\n\n*********************************************************************");

    printf("\n\n\n***TOTAL & AVERAGE MONTHLY RAINFALL***");

    // LOOP TO FIND THE AVERAGE MONTHLY RAINFALL
    for(int k = 0; k < 12; ++k) {
        for(int l = 0; l < 5; ++l) {
            totalMonthlyRainfall[k] += rainfallValues[l][k];
            
        }
        printf("\n\nThe total monthly rainfall is: %.2f", totalMonthlyRainfall[k]);
        printf("\n\nThe average monthly rainfall is: %.2f", totalMonthlyRainfall[k] / 12);
        printf("\n\n*********************************************************************");
    }

    return 0;
}
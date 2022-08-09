/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM PRINTS OUT ENUM DATA TYPES
	DATE: DECEMBER 29TH, 2021
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //DECLARE THE ENUMS
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company myCompany1 = XEROX;
    enum Company myCompany2 = GOOGLE;
    enum Company myCompany3 = EBAY;

    //PRINT THE ENUMS
    printf("The values are:\n %d\n %d\n %d\n", myCompany1, myCompany2, myCompany3);

    return 0;
}
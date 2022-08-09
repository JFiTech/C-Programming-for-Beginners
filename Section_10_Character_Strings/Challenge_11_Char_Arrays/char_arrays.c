/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 11 - UNDERSTANDING CHAR ARRAYS - MY SOLUTION
	DATE: APRIL 11TH, 2022
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// FUNCTION PROTOTYPES
void main(void);    // MAIN FUNCTION
int numOfChars(const char stringX[]);   // FUNCTION TO COUNT THE NUMBER OF CHARACTERS IN A STRING
char concatStrings(const char str1[], const char str2[]); // FUNCTION TO CONCATENATE TWO CHARACTER STRINGS
bool areStringsEqual(const char string1[], const char string2[]);   // FUNCTION TO DETERMINE IF TWO STRINGS ARE EQUAL


// MAIN FUNCTION
void main(void){
    // VARIABLE DECLARATION
    const char myString[] = "Hello, this is a test"; // CONTAINS 21 CHARACTERS + NULL TERMINATOR '\0' = 22 CHARACTERS
    const char myString2[] = "of the concat function";

    // FUNCTION CALLS
    // numOfChars(myString);
    // concatStrings(myString, myString2);
    // areStringsEqual(myString, myString2);

    
    // SCREEN OUTPUT
    // numOfChars FUNCTION
    printf("\n1. The amount of character in the string \"%s\" is: %d", myString, numOfChars(myString),"\n");

    //concatStrings FUNCTION
    // printf("\n2. The result of the concatenated strings is: \n%s", concatStrings(myString, myString2));

    //areStringsEqual FUNCTION
    printf("\n3. The result of the comparisson between the strings: \n %s", myString, "\nand %s", myString2, "\nis: %u", areStringsEqual(myString, myString2));
}


// FUNCTION TO COUNT THE NUMBER OF CHARACTERS IN A STRING
int numOfChars(const char stringX[]){
    // VARIABLE DECLARATION
    int counter = 0; 
    
    // LOOP TO ITERATE THROUGH THE ARRAY
    for(int i = 0; i < stringX[i]; ++i){
        ++counter;
    }

    return counter;
}


// FUNCTION TO CONCATENATE TWO CHARACTER STRINGS
char concatStrings(const char str1[], const char str2[]){
    // VARIABLE DECLARATION
    

    // FUNCTION CALL
    int str1Length = numOfChars(str1);  // CALLS THE numOfChars() FUNCTION ON str1 AND STORES THE RETURNED VALUE ON str1Length
    int str2Length = numOfChars(str2);  // CALLS THE numOfChars() FUNCTION ON str2 AND STORES THE RETURNED VALUE ON str2Length */

    char result[str1Length + str2Length];


    return (int)result;
}


// FUNCTION TO DETERMINE IF TWO STRINGS ARE EQUAL
bool areStringsEqual(const char string1[], const char string2[]){
    // VARIABLE DECLARATION
    bool areEqual = false;

    // LOOP TO ITERATE THROUGH THE ARRAYS AND COMPARE EACH CHARACTER
    for(i = 0; i < string1; ++i){
        for(j = 0; j < string2; ++j){
            if(string[i] == string[j])
        }
    }

    return areEqual;

}

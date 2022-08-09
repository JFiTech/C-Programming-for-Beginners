/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 9 - WRITE SOME FUNCTIONS - MY SOLUTION
	DATE: MARCH 24TH, 2022
*/


// INCLUDES STATEMENTS
#include <stdio.h>


//FUNCTION PROTOTYPES
void main(void); // MAIN FUNCTION
unsigned int gcd(unsigned int x, unsigned int y); // GREATEST COMMON DIVISOR FUNCTION
float absoluteValue(float a); // ABSOLUTE VALUE OF A NUMBER FUNCTION
float squareRoot(float); // SQUARE ROOT OF A NUMBER FUNCTION


// MAIN FUNCTION
void main(void){
    // CALL THE GCD FUNCTION
    // gcd(128, 96);

    printf("\nThe GCD is: %f", gcd(128, 96));

    // CALL THE absoluteValue FUNCTION
    // absoluteValue(-2);

    printf("\nThe absolute value is: %f", absoluteValue(-2));

    // CALL THE SQUARE ROOT OF A NUMBER FUNCTION
    // squareRoot(25);
    
    return;
}


// GREATEST COMMON DIVISOR FUNCTION
unsigned int gcd(unsigned int x, unsigned int y) {
    // DECLARE LOCAL VARIABLE
    unsigned int z;

    do {
        if (x > y)
            z = (x / y);
        else
            z = (y / x);
        // (x > y ? z = (x / y): z = (y / x));
    } while (z != 0);

    return z;
}


// ABSOLUTE VALUE OF A NUMBER FUNCTION
float absoluteValue(float a) {
    if(a < 0)
        a *= -1;
    else 
        a = a;
    // (a < 0 ? a *= -1 : );
    return a;
}


// SQUARE ROOT OF A NUMBER FUNCTION
// float squareRoot(float) {
//     // HERE WE HAVE TO INVOKE THE PREVIOUS absoluteValue FUNCTION
//     absoluteValue(b)
//     for(i = b; i < ; )
//         sqrRoot = ;
// }
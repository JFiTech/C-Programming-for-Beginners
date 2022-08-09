/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 7 - PRIME NUMBERS - MY SOLUTION
	DATE: MARCH 19TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // DECLARE VARIABLES
    int numbers[100];
    int primes[100];
    bool isPrime;

    // FILL OUT THE numbers[] ARRAY WITH THE NUMBERS FROM 0 TO A 100
    for(int i = 1; i < 100; ++i){
        numbers[i] = i;
        
        for(int j = 0; j < 100; ++j) {
            if(numbers[i] % numbers[i - 1] == 0) {
                isPrime = false;
            } 
            if(isPrime == true) {
                primes[j] = numbers[i];
                printf("\n\nThe prime numbers are: %d", primes[j]);
            }
        } 
    }
   
    return 0;
}
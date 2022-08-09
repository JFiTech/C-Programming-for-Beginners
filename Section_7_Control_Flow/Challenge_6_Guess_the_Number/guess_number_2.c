/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 6 SOLUTION
	DATE: MARCH 10TH, 2022
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// DECLARE CONSTANTS

int main() {
    // DECLARE VARIABLES
    int guessNumber;

    // GENERATE RANDOM NUMBER
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    // INITIAL MESSAGE
    printf("\n\nThis is a guessing game.\nI have chosen a random number between 0 and 20 which you must guess.\n");


    // REQUEST USER INPUT
    for (int remainingGuesses = 5;remainingGuesses < 6 && remainingGuesses > 0; remainingGuesses--) {
        do {
            printf("\nEnter a guess: ");
            scanf("%d", &guessNumber);

            if(guessNumber < 0 && guessNumber > 20) {
                printf("Error: your number must be between 0 and 20.");
                continue;
            }
            else if(guessNumber == randomNumber) {
                printf("\nCorrect, you guessed it! The number is %d\n\n", randomNumber);
                break;
            } else {
                printf("\nSorry, %d is wrong. Remaining guesses: %d\n\n", guessNumber, remainingGuesses);
                printf("==================\n");
            }
                //continue;
        } while(guessNumber > -1 && guessNumber < 21);
        break;
    }
    

    

    



    return 0;
}
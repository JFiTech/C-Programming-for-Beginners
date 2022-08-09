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
    printf("\nEnter a guess: ");
    scanf("%d", guessNumber);


    for(int remainingGuesses = 5;remainingGuesses > 0; --remainingGuesses) {
        if (guessNumber < 0 || guessNumber < 20) { 
            printf("Error: please enter a number between 0 and 20.\n");
            continue;
        } else {
            do {
                printf("\n\nYou have %d tries left\n", remainingGuesses);
                printf("\nEnter a guess: ");
                scanf("%d", guessNumber);

                if (guessNumber == randomNumber) {
                    printf("Congratulations. You guessed it!");
                    break;
                } else if (guessNumber > randomNumber) {
                    printf("Sorry, %d is wrong. My number is less than that.", guessNumber);
                } else if (guessNumber < randomNumber){
                    printf("Sorry, %d is wrong. My number is more than that.", guessNumber);
                } else {
                    printf("No more guesses remaining.You lose.\nThe correct number was %d", randomNumber);
                    break;
                }
            } while(guessNumber > -1 && guessNumber < 21);
        }
    }
    return 0;
}
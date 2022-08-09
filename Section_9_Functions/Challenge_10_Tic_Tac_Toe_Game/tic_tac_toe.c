/*
	AUTHOR: JFITECH
	PURPOSE: CHALLENGE 10 - CREATE A TIC TAC TOE GAME - MY SOLUTION
	DATE: MARCH 28TH, 2022
*/


// INCLUDES STATEMENTS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


// FUNCTION PROTOTYPES
void main(void); // MAIN FUNCTION
int checkForWin(char); // CHECK FOR WIN OR DRAW FUNCTION
char drawBoard(char); // DRAW BOARD FUNCTION
char markBoard(char); // MARK BOARD FUNCTION




// MAIN FUNCTION
void main(void){
    // DECLARE VARIABLES AND ARRAYS
    

    // GAME NAME
    printf("\t\t\tTic-Tac-Toe\n");

    // EACH PLAYER'S CHARACTER
    printf("\nPlayer 1 (X) - Player 2 (O)");

    






    return;
}




// CHECK FOR WIN OR DRAW FUNCTION
int checkForWin(char) {
    // DECLARE VARIABLES
    enum whoWins {0, 1, 2, 3}; /*   = 1 --> PLAYER 1 WINS
                                    = 2 --> PLAYER 2 WINS
                                    = 3 --> DRAW
                                    = 0 --> GAME NOT YET CONCLUDED
                            */

    // ITERATE THROUGH THE BOARD TO CHECK WHO WINS OR IF IT'S A DRAW
    for(i = 0; i < board; ++i){
            for(j = 0; j < board; ++j) {
                // SWITCH CASE TO CHECK WHO WINS OR IF IT'S A DRAW
                switch (board) {
                    // FIRST ROW
                    case(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] = 'O'):
                        whoWins = 2;
                        break;
                    // SECOND ROW
                    case(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] = 'O'):
                        whoWins = 2;
                        break;
                    // THIRD ROW
                    case(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] = 'O'):
                        whoWins = 2;
                        break;
                    // FIRST COLUMN
                    case(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] = 'O'):
                        whoWins = 2;
                        break;
                    // SECOND COLUMN
                    case(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] = 'O'):
                        whoWins = 1;
                        break;
                    // THIRD COLUMN
                    case(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] = 'X'):
                        whoWins = 2;
                        break;
                    /* LEFT DIAGONAL --> \ */
                    case(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] = 'O'):
                        whoWins = 2;
                        break;
                    /* RIGHT DIAGONAL --> / */
                    case(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] = 'X'):
                        whoWins = 1;
                        break;
                    case(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] = 'O'):
                        whoWins = 1;
                        break;
                    default:
                        // whoWins = ;
                        break;
                }
            }
        }

    return whoWins;
}


// DRAW BOARD FUNCTION
// REDRAWS THE BOARD FOR EACH PLAYER TURN
char drawBoard(char array) {

        for(i = 0; i < board; ++i){
            for(j = 0; j < board; ++j) {
                board[i][j];
            }
        }

        printf("")

}   


// MARK BOARD FUNCTION
// SETS THE CHAR ARRAY WITH A SELECTION AND CHECKS FOR AN INVALID SELECTION
char markBoard(void) {
    // DECLARE VARIABLES AND ARRAYS
    char board[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9} 
    };
    char player1Move;
    char player2Move;
    bool winCheck = false;

    // REQUEST USER MOVE
    do {

        // REQUEST USER'S 1 MOVE
        printf("Player 1's turn.\nEnter a number: ");
        scanf("%c", &player1Move);

        // LOOP TO ITERATE THROUGH THE BOARD AND MARK PLAYER 1'S SELECTION
        for(i = 0; i < board; ++i){
            for(j = 0; j < board; ++j) {
                board[i][j] = player1Move;
            }
        }

        // INVOKE THE drawBoard() FUNCTION
        drawBoard(board);


        // LOOP TO ITERATE THROUGH THE BOARD AND MARK PLAYER 2'S SELECTION
        printf("Player 2's turn.\nEnter a number: ");
        scanf("%c", &player2Move);

        // LOOP TO ITERATE THROUGH THE BOARD AND MARK PLAYER 2'S SELECTION
        for(k = 0; k < board; ++k){
            for(l = 0; l < board; ++l) {
                board[k][l] = player2Move;
            }
        }

        // INVOKE THE drawBoard() FUNCTION
        drawBoard(board);
        checkForWin(winCheck);
    } while(winCheck == false)



    return board;
}
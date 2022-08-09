/*
   AUTHOR: JFITECH
   DATE: DECEMBER 27TH, 2021
   PURPOSE: 

*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) { /* THIS MAIN FUNCTION HAS TWO PARAMETERS. 
                                    WHAT'S AFTER THE COMMA IS SOME DATA THAT YOU'RE PASSING TO THE PROGRAM 
                                    THE argc WOULD BE THE NUMBER OF THE DATA */
   
   int numberOfArguments = argc;
   char *argument1 = argv[0]; // THIS SETS argument1 VARIABLE EQUAL TO THE PROGRAM NAME
   char *argument2 = argv[1];

   printf("Number of arguments: %d\n", numberOfArguments); 
   printf("Argument 1 is the program name: %s\n", argument1); // HERE WE USE %s BECAUSE THIS IS A STRING
   printf("Argument 2 is the command line argument: %s\n", argument2);

   return 0;
}

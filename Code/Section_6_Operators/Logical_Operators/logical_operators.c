/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM SHOWS US LOGICAL OPERATORS
	DATE: FEBRUARY 13TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    //DECLARE THE VARIABLES
    bool a = true;
    bool b = false;
    bool result;

    result = !a;

    // ONLY ONE OF THE VARIABLES HAS TO BE true IN ORDER FOR THE RESULT TO BE true
    printf("%d\n", result);

    return 0;
}
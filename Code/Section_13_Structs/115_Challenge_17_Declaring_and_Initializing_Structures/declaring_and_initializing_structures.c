/*
	AUTHOR: JFITECH
	PURPOSE: STRUCTS AND POINTERS
	DATE: MAY 12TH, 2022
*/


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// STRUCT DEFINITION
struct employee{
    char name[20];
	int hireDate;
	float salary;
};



// MAIN FUNCTION
void main(void){
	// DECLARE VARIABLES
	struct employee Joe;
	struct employee employee2;


	// ASSIGN DATA TO THE FIRST EMPLOYEE STRUCT
	// SETS THE SIZE OF THE DATA INSIDE Joe.name TO NULL TERMINATORS
	memset(Joe.name, '\0', sizeof(Joe.name));
	// COPIES THE STRING "Joe" TO THE Joe.name ARRAY - ONLY COPIES THE FIRST 4 CHARACTERS (THIRD ARGUMENT)
	strncpy(Joe.name, "Joe", 4);
	Joe.hireDate = 10102015;
	Joe.salary = 78000.00;


	// PRINT FIRST EMPLOYEE'S INFO
	printf("\nEmployee's name: %s", Joe.name) ;
	printf("\nEmployee's hire date: %d", Joe.hireDate);
	printf("\nEmployees salary: %.2f", Joe.salary);


	// READ INPUT FROM THE USER
	// NAME
	memset(employee2.name, '\0', sizeof(employee2.name));
	printf("\n\nPlease enter the second employee's name: ");
	scanf("%s", employee2.name);
	strncpy(employee2.name, employee2.name, 20);
	// HIRE DATE
	printf("\nPlease enter the second employee's hire date: ");
	scanf("%d", &employee2.hireDate);
	// SALARY
	printf("\nPlease enter the second employee's salary: ");
	scanf("%f", &employee2.salary);


	// PRINT SECOND EMPLOYEE'S INFO
	printf("\nSecond employee's name: %s", employee2.name) ;
	printf("\nSecond employee's hire date: %d", employee2.hireDate);
	printf("\nSecond employees salary: %.2f", employee2.salary);

    return;
}
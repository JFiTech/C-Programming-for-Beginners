/*
	AUTHOR: JFITECH
	PURPOSE: THIS PROGRAM CALCULATES AND PRINTS OUT THE AMOUNT OF WEEKLY PAY
	DATE: MARCH 6TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // DECLARE VARIABLES
    float hoursWorked, basicPay = 12.00, grossPay, grossPayOvertime, overtimePay = 18.00, fifteenTaxRate; 
    float twentyTaxRate, netPay, twentyFiveTaxRate;

    // REQUEST THE AMOUNT OF HOURS WORKED FROM THE USER
    printf("\nPlease enter the amount of hours worked this week: ");
    scanf("\n%f", &hoursWorked);

    // CALCULATE GROSSPAY
    if (hoursWorked < 40.1f){
        grossPay = basicPay * 40; 
    } else if (hoursWorked > 40.0f){
        grossPay = basicPay * 40;
        grossPayOvertime = overtimePay * (hoursWorked - 40.0f);
        grossPay += grossPayOvertime;
    }

    // CALCULATE TAXES AND NET PAY
    if (grossPay < 301) {
        fifteenTaxRate = grossPay * 0.15f;
        netPay = grossPay - fifteenTaxRate;
    } else if (grossPay > 300 && grossPay < 451) {
        fifteenTaxRate = grossPay * 0.15f;
        twentyTaxRate = (grossPay - 300) * 0.20f;
        netPay = (grossPay - fifteenTaxRate) - twentyTaxRate;
    } else if (grossPay > 450) {
        fifteenTaxRate = grossPay * 0.15f;
        twentyTaxRate = (grossPay - 300) * 0.20f;
        twentyFiveTaxRate = (grossPay - 450) * 0.25f;
        netPay = ((grossPay - fifteenTaxRate) - twentyTaxRate) - twentyFiveTaxRate;
    }

    printf("\nYour pay is: %.2f", grossPay);
    printf("\nYour net pay is: %.2f", netPay);

    return 0;
}
/*
	AUTHOR: JFITECH
	PURPOSE: STRUCTS AND POINTERS
	DATE: MAY 12TH, 2022
*/


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 30

// STRUCT DEFINITION
struct item{
    char *itemName;
    int quantity;
    float price;
    float amount; // STORES quantity * price
};


// FUNCTION PROTOTYPES
void readItem(struct item *item);
void printItem(struct item *pItem);


// MAIN FUNCTION
void main(void){
    // DECLARE VARIABLES
    struct item itm;
    struct item *itemPtr = {NULL};
    
    itemPtr = &itm;
    
    // ALLOCATE MEMORY 
    itemPtr->itemName = (char *) calloc(SLEN, sizeof(char));
    // CHECK IF MEMORY WAS ALLOCATED CORRECTLY
    if(itemPtr == NULL)
        exit(-1);
    
    // FUNCTION CALLS
    readItem(itemPtr);
    printItem(itemPtr);
    
    // FREE THE PREVIOUSLY CALLOC'D MEMORY
    // WE JUST WANNA FREE WHAT WE CALLOC'D (itemName)
    free(itemPtr->itemName);
    
    return;
}


// READ ITEM FUNCTION
void readItem(struct item *pItem){
    // READ IN PRODUCT'S NAME
    printf("\nPlease enter the product's name: ");
    scanf("%s", pItem->itemName);
    // READ IN PRODUCT'S QUANTITY
    printf("\nPlease enter the product's quantity: ");
    scanf("%d", &pItem->quantity);
    // READ IN PRODUCT'S PRICE
    printf("\nPlease enter the product's price: $");
    scanf("%f", &pItem->price);
    // CALCULATE THE PRODUCT'S AMOUNT
    pItem->amount = (float)(pItem->quantity) * (pItem->price);
}


// PRINT ITEM FUNCTION
void printItem(struct item *pItem){
    // PRINT OUT THE PRODUCT'S NAME
    printf("\n\nThe product's name is: %s", pItem->itemName);
    // PRINT OUT THE PRODUCT'S QUANTITY
    printf("\nThe product's quantity is: %i", pItem->quantity);
    // PRINT OUT THE PRODUCT'S PRICE
    printf("\nThe product's price is: $%.2f", pItem->price);
    // PRINT OUT THE AMOUNT
    printf("\nThe amount due is: $%.2f", pItem->amount);
}
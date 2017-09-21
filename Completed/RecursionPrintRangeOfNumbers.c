/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										RecursionPrintRangeOfNumbers.c
 * ---------------------------------------------------------------------------
 * Goal :
 *			The goal of this program is to use recursion and print the numbers
 *			between the two input or hard coded numbers.
 ******************************************************************************/

#include "../header.h"

void printNumbersBetween( int xBig,
						  int currentNum );

void RecursionPrintRangeOfNumbers( void ) {

//	printf("\n> Enter a small number: ");
	int aSmallNum = 1;
//	scanf("%d", aSmallNum);
//
//	printf("\n>Enter a bigger number: ");
	int aBiggerNum = 5;
//	scanf("%d", aBiggerNum);

	printf("> Enter a small number: 1\n");
	printf("> Enter a bigger number: 5\n");

	printNumbersBetween( aBiggerNum,aSmallNum );
}

void printNumbersBetween( int xBig,
						  int currentNum ) {
	currentNum++;
	if(currentNum < xBig) {
		printf("\n> %d", currentNum);
		printNumbersBetween( xBig, currentNum );
	}
}

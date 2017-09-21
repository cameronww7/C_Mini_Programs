/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										TernaryOperator.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void TernaryOperator(void) {
	int num1 = 5;

	printf("\n> Enter a Number to be Input: 5 (Hard Coded)");
//	scanf("%d", &num1);


	printf("\n> Your number is %d and is a ", num1);
	((num1 % 2) == 0) ? printf("even") :printf("odd"); //Ternary
}

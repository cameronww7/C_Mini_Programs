/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										InputIntOutputFloatTypeCast.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void InputIntOutputFloatTypeCast(void) {
	int num1 = 5;

	printf("\n> Enter a Number to be Input: 5 (Hard Coded)");
//	scanf("%d", &num1);

	printf("\n> Your number as a float is %.1f", (float)num1);
}

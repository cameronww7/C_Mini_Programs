/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										InputAndMultiplyDivide.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void InputAndMultiplyDivide(void) {
	float num1 = 5;

	printf("\n> Enter a Number to be Input: ");
	scanf("%f", &num1);

	printf("\n> The Value you entered was %.1f", num1);
	num1 = 5 * num1;
	printf("\n> The Value is now multiplied by 5 and is now %.1f", num1);
	num1 = num1 / 3;
	printf("\n> The Value is now divided by 3 and is now %.1f", num1);
}

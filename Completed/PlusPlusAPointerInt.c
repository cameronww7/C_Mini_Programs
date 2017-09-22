/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										PlusPlusAPointerInt.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void PlusPlusAPointerInt(void) {
	int integer = 5;
	int * integerPtr ;
	integerPtr = &integer;

	printf("\n> Integer value : %d", integer);
	printf("\n> IntegerPtr value : %p", *integerPtr);
	printf("\n> IntegerPtr value after : %p", ++*integerPtr);
	printf("\n> Integer value after : %d", integer);
}

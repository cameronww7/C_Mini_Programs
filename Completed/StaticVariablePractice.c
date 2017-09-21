/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										StaticVariablePractice.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void StaticVariablePractice(int myArray[]) {
	for(int index = 0; index < STATIC_ARRAY_SIZE; index++) {
		printf("\n> Index %d: %d -- before population", index, myArray[index]);
	}

	myArray[0] = 2;
	myArray[1] = 3;
	myArray[2] = 5;
	myArray[3] = 7;
	myArray[4] = 11;

	for(int index = 0; index < STATIC_ARRAY_SIZE; index++) {
		printf("\n> Index %d: %d -- After population", index, myArray[index]);
	}
}

/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										StaticVariablePractice.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void PrintPassedInArray(int myArray[]) {
	for(int index = 0; index < STATIC_ARRAY_SIZE; index++) {
		printf("\n> Index %d: %d", index, myArray[index]);
	}
}

/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										PrintPassedInArray.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

void PrintPassedInArray(int myArray[]) {
	for(int index = 0; index < ARRAY_SIZE_OF_5; index++) {
		printf("\n> Index %d: %d", index, myArray[index]);
	}
}

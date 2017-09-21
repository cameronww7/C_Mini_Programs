/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										PrintFirst5Primes.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"

int * primes(void) {
	static int STATIC_ARRAY[ARRAY_SIZE_OF_5] = {2,3,5,7,11};

	return STATIC_ARRAY;
}

void PrintFirst5Primes(void) {
	int * array = primes();

	for(int index = 0; index < ARRAY_SIZE_OF_5; index++) {
		printf("\n> Prime %d: %d", index+1, array[index]);
	}
}

/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										DisplayAPyramid.c
 * ---------------------------------------------------------------------------
 * Goal :
 *			The goal of this program is to print a hard coded number pyramid.
 *			The number hard coded should be the middle with sides cascading
 *			down each other.
 ******************************************************************************/

#include "../header.h"

void PrintOneLineInPyramid(int xHowManyBars);
void PrintPyramid(int xHowManyDots);

void DisplayAPyramid( void ) {
	PrintPyramid(5);
}

void PrintOneLineInPyramid(int xHowManyDots) {
	printf("> %d |", xHowManyDots);

	for(int index = 0; index < xHowManyDots; index++) {
		printf("*");
	}

	printf("\n");
}

void PrintPyramid(int xHowManyBars) {
	for(int index = 0; index < xHowManyBars; index++) {
		PrintOneLineInPyramid(index);
	}

	for(int index = xHowManyBars; index >= 0; index--) {
		PrintOneLineInPyramid(index);
	}

}

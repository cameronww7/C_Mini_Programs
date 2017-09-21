/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										HeightInCMToFeetAndInches.c
 * ---------------------------------------------------------------------------
 * Goal :
 *			The goal of this program is to calculate a input height in cm
 *			to feet and inches.
 ******************************************************************************/

#include "../header.h"

void HeightInCMToFeetAndInches(void) {
	double heightInCM = 0;
	double inches	  = 0;
	int    feet   	  = 0;

//	printf( "\n> Enter your height: ");
//	scanf("%lf", &heightInCM);

	printf( "> Enter your height: 180 (This is hard coded)");
	heightInCM = 180;

	inches = heightInCM / 2.54;

	feet = inches / 12;

	inches = inches - (feet * 12);

	printf("\n> Height : %d feet and %.1f inches\n", feet, inches);
}

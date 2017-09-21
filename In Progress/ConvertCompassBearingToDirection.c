/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										ConvertCompassBearingToDirection.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include <math.h>

void getDirection(void);

void ConvertCompassBearingToDirection(void) {
	getDirection();
}

//Function definition
void getDirection(void){
	double direction = 180.8;

	printf("> Enter a direction between 0.0¡ and 360.0¡: 180.8 (hard Coded)");
//	scanf("%lf", &dir);

	if (direction <  90.0) {
		printf("\n> You're headed N %.1f¡ E\n",direction);
	} else if (direction <  180.0) {
		printf("\n> You're headed S %.1f¡ E\n",180.0-direction);
	} else if (direction <  270.0) {
		printf("\n> You're headed S %.1f¡ W\n",direction-180.0);
	} else if (direction <= 360.0) {
		printf("\n> You're headed N %.1f¡ W\n",360.0-direction);
	} else {
		printf("\n> Angle > 360 (%.1f) not allowed\n", direction);
	}
}

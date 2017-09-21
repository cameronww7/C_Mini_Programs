/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										BoilingAndFreezingOfFehKev.c
 * ---------------------------------------------------------------------------
 * Goal :
 *			The goal of this progam is to calculate the boiling and freezing
 *			points of feh and kel from celsius.
 ******************************************************************************/

#include "../header.h"

const double BOILING_CELSIUS  = 100.0;
const double FREEZING_CELSIUS = 0.0;

void BoilingAndFreezingOfFehKev(void) {
	double boilFeh  = 0;
	double frezlFeh = 0;
	double boilKev  = 0;
	double frezKev  = 0;

	boilFeh  = BOILING_CELSIUS  * (9/5) + 32.0;
	frezlFeh = FREEZING_CELSIUS * (9/5) + 32.0;

	boilKev  = BOILING_CELSIUS  + 273.0;
	frezKev  = FREEZING_CELSIUS + 273.0;

	printf("> Water Boils at %.1f degrees Feh and freezes at %.1f degrres feh\n", boilFeh, frezlFeh);
	printf("> Water Boils at %.1f degrees Kev and freezes at %.1f degrres kev\n", boilKev, frezKev);
}

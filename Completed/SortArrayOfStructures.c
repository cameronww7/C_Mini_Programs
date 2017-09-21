/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										SortArrayOfStructures.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include "string.h"

void SortArrayOfStructures(void) {

	struct weather {
		char  day[10];
		float temperature;
	};

	struct weather temp;

	struct weather week[7] = {
		{ "Sunday", 72.5 },
		{ "Monday", 68.4 },
		{ "Tuesday", 75.0 },
		{ "Wednesday", 73.8 },
		{ "Thursday", 65.1 },
		{ "Friday", 72.8 },
		{"Saturday", 75.2 }
	};

	//Bubble Sort XD
	for(int outerIndex = 0; outerIndex < 7; outerIndex++ ){
		for(int innerIndex = outerIndex+1; innerIndex < 7; innerIndex++ ){
			if( week[outerIndex].temperature > week[innerIndex].temperature) {
				temp = week[innerIndex];
				week[innerIndex] = week[outerIndex];
				week[outerIndex] = temp;
			}
		}
	}

	puts("\n> This week's forecast:");

	for(int x = 0; x < 7; x++) {
		printf("\n>%10s %.1f degrees", week[x].day, week[x].temperature);
	}

}

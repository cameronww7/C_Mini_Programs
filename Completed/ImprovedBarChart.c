/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										ImprovedBarChart.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include <time.h>

#define SIZE_OF_ARRAY 5

void PrintSingleBar(int xHowManyBars);
void PrintAllBars(int xDataSet[]);

void GenerateDataSet(int xDataSet[]);


void ImprovedBarChart( void ) {
	int xDataSet[SIZE_OF_ARRAY];
	GenerateDataSet(xDataSet);
	PrintAllBars(xDataSet);
}

void PrintSingleBar(int xHowManyDots) {
	printf("> %d |", xHowManyDots);

	for(int index = 0; index < xHowManyDots; index++) {
		printf("*");
	}

	printf("\n");
}

void PrintAllBars(int xDataSet[]) {
	for(int index = 0; index < SIZE_OF_ARRAY; index++){
		PrintSingleBar(xDataSet[index]);
	}
}

void GenerateDataSet(int xDataSet[]) {
	srand(time(NULL));
	for(int index = 0; index < SIZE_OF_ARRAY; index++){
		xDataSet[index] = (rand()%50);
	}
}

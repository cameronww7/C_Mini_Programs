/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 * 										main.c
 ******************************************************************************/

#include "header.h"

#define EXIT_SUCCESS 0;

int main(void) {

	printf("\n                  Welcome to C Mini Progams");
	printf("\n------------------------------------------------------------------\n");

	printf("\n                  Calling HeightInCMToFeetAndInches");
	printf("\n------------------------------------------------------------------\n");
	HeightInCMToFeetAndInches();

	printf("\n                  Calling BoilingAndFreezingOfFehKev");
	printf("\n------------------------------------------------------------------\n");
	BoilingAndFreezingOfFehKev();

	printf("\n                  Calling RecursionPrintRangeOfNumbers");
	printf("\n------------------------------------------------------------------\n");
	RecursionPrintRangeOfNumbers();

	printf("\n                  Calling StockPurchaseDecisionAdvisor");
	printf("\n------------------------------------------------------------------\n");
	StockPurchaseDecisionAdvisor();

	printf("\n                  Calling DisplayAPyramid");
	printf("\n------------------------------------------------------------------\n");
	DisplayAPyramid();

	printf("\n                  Calling ImprovedBarChart");
	printf("\n------------------------------------------------------------------\n");
	ImprovedBarChart();

	return EXIT_SUCCESS;
}

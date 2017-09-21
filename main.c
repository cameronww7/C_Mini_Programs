/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 * 										main.c
 ******************************************************************************/

#include "header.h"

#define EXIT_SUCCESS 0;

int main(int argc, char * argv[]) {

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

	printf("\n                  Calling LoanCalculator");
	printf("\n------------------------------------------------------------------\n");
	LoanCalculator();

	printf("\n                  Calling ConvertCompassBearingToDirection");
	printf("\n------------------------------------------------------------------\n");
	ConvertCompassBearingToDirection();

	printf("\n                  Calling InputAndMultiplyDivide");
	printf("\n------------------------------------------------------------------\n");
	InputAndMultiplyDivide();

	printf("\n                  Calling TernaryOperator");
	printf("\n------------------------------------------------------------------\n");
	TernaryOperator();

	printf("\n                  Doing Argv Program");
	printf("\n------------------------------------------------------------------\n");
	//Below is a Simple usage and attempting to understand how one cause pass in
	//information using argc and argv through these variables
	argc = 2;
	argv[1] = "ExampleFile.txt";

	if( argc < 2 ) {
		printf("Please specify a Filename");
		return 1;
	}

	printf("I will examine file '%s'\n", argv[1]);

	return EXIT_SUCCESS;
}

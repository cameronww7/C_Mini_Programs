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

	printf("\n                  Calling HeightInCMToFeetAndInches Function");
	printf("\n------------------------------------------------------------------\n");
	HeightInCMToFeetAndInches();

	printf("\n                  Calling BoilingAndFreezingOfFehKev Function");
	printf("\n------------------------------------------------------------------\n");
	BoilingAndFreezingOfFehKev();

	printf("\n                  Calling RecursionPrintRangeOfNumbers Function");
	printf("\n------------------------------------------------------------------\n");
	RecursionPrintRangeOfNumbers();

	printf("\n                  Calling StockPurchaseDecisionAdvisor Function");
	printf("\n------------------------------------------------------------------\n");
	StockPurchaseDecisionAdvisor();

	printf("\n                  Calling DisplayAPyramid Function");
	printf("\n------------------------------------------------------------------\n");
	DisplayAPyramid();

	printf("\n                  Calling ImprovedBarChart Function");
	printf("\n------------------------------------------------------------------\n");
	ImprovedBarChart();

	printf("\n                  Calling LoanCalculator Function");
	printf("\n------------------------------------------------------------------\n");
	LoanCalculator();

	printf("\n                  Calling ConvertCompassBearingToDirection Function");
	printf("\n------------------------------------------------------------------\n");
	ConvertCompassBearingToDirection();

	printf("\n                  Calling InputAndMultiplyDivide Function");
	printf("\n------------------------------------------------------------------\n");
	InputAndMultiplyDivide();

	printf("\n                  Calling TernaryOperator Function");
	printf("\n------------------------------------------------------------------\n");
	TernaryOperator();

	printf("\n                  Doing Argv Program");
	printf("\n------------------------------------------------------------------\n");
	// Below is a Simple usage and attempting to understand how one cause pass in
	// information using argc and argv through these variables
	argc = 2;
	argv[1] = "ExampleFile.txt";

	if( argc < 2 ) {
		printf("Please specify a Filename");
		return 1;
	}

	printf("I will examine file '%s'\n", argv[1]);

	printf("\n                   Calling InputIntOutputFloatTypeCast Function");
	printf("\n------------------------------------------------------------------\n");
	InputIntOutputFloatTypeCast();

	printf("\n                  Calling StaticVariablePractice Function");
	printf("\n------------------------------------------------------------------\n");
	int myArray[ARRAY_SIZE_OF_5] = {0,0,0,0,0};
	StaticVariablePractice(myArray);

	printf("\n\n                  Calling PrintPassedInArray Function");
	printf("\n------------------------------------------------------------------\n");
	PrintPassedInArray(myArray);

	printf("\n\n                  Calling PrintFirst5Primes Function");
	printf("\n------------------------------------------------------------------\n");
	PrintFirst5Primes();

	printf("\n\n                  Calling SortInputString Function");
	printf("\n------------------------------------------------------------------\n");
	SortInputString();

	printf("\n\n                  Calling StructPractice Function");
	printf("\n------------------------------------------------------------------\n");
	StructPractice();

	printf("\n\n                  Calling SortArrayOfStructures Function");
	printf("\n------------------------------------------------------------------\n");
	SortArrayOfStructures();

	printf("\n\n                  Calling PlusPlusAPointerInt Function");
	printf("\n------------------------------------------------------------------\n");
	PlusPlusAPointerInt();

	return EXIT_SUCCESS;
}

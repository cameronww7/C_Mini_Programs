/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										SortInputString.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include <string.h>

#define INPUT_SIZE 64

void SortInputString(void) {

	char inputString[INPUT_SIZE] = {'c','d','b','a'};
	int length = 0;
	int temp   = 0;

	printf("\n> Please enter some text in (Max Size 64 characters) : cdba (hard coded)");
//	fgets(inputString, INPUT_SIZE, stdin);

	length = strlen(inputString);

	for(int outerIndex = 0; outerIndex < length; outerIndex++ ){
		for(int innerIndex = outerIndex+1; innerIndex < length; innerIndex++ ){
			if( inputString[outerIndex] > inputString[innerIndex]) {
				temp = inputString[innerIndex];
				inputString[innerIndex] = inputString[outerIndex];
				inputString[outerIndex] = temp;
			}
		}
	}

	printf("\n> Displaying Sorted Text");
	printf("\n> Sorted: %s", inputString);

}

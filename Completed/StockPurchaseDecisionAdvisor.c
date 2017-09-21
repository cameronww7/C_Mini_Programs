/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										StockPurchaseDecisionAdvisor.c
 * ---------------------------------------------------------------------------
 * Goal :
 *			The goal of this program is to display to the user to buy or sell
 *			or hold on a stock that is input or hard coded.
 ******************************************************************************/

#include "../header.h"

#define SELL_PRICE_POINT 43.2
#define BUY_PRICE_POINT  21.1

double AskStockValue(void);
void   MakeDecision(double xValue);
void   HandleTransaction(char xAction);

void StockPurchaseDecisionAdvisor(void) {
	double value = AskStockValue();
	MakeDecision(value);
}

double AskStockValue(void) {
//	printf("> What is Stock Value at? : ");
	printf("> What is Stock Value at? : 25.5");
	double value = 25.5;
//	scanf("%lf", &value);

	return value;
}

void MakeDecision(double xValue) {
	if(xValue >= SELL_PRICE_POINT) {
		HandleTransaction('b');
	} else {
		if (xValue >= BUY_PRICE_POINT) {
			HandleTransaction('s');
		} else {
			HandleTransaction('h');
		}
	}
}

void HandleTransaction(char xAction){
	switch(xAction) {
		case 'b':
			printf("\n> Buy");
			break;
		case 's':
			printf("\n> Sell");
			break;
		case 'h':
			printf("\n> Hold or Wait");
			break;
		default:
			printf("\n> Error");
	}
}

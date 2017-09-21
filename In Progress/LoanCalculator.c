/*******************************************************************************
 * 		Cameron Walters
 * 						C Mini Programs
 *										LoanCalculator.c
 * ---------------------------------------------------------------------------
 * Goal :
 *
 ******************************************************************************/

#include "../header.h"
#include <math.h>

double loanPayment(double xAmount,
		   	   	   double xRate,
				   int 	  xNumYears);

void LoanCalculator(void) {
	double  amount = 50;
	double  rate   = 1.20;
	int     nYears = 20;

//	printf("> Enter loan amount:");
//	scanf("%lf", &amount);
//
//	printf("> Enter yearly interest rate:");
//	scanf("%lf", &rate);
//
//	printf("> Enter number of years:");
//	scanf("%d", &nYears);

	double payment = loanPayment(amount,nYears,rate);
	printf("\n> Monthly payment = $%.2lf",payment);
	printf("\n> Total payback = $%.2lf\n",payment*nYears*12);
}

//Math Libaray not Linking

double loanPayment(double xAmount,
	   	   	   	   double xRate,
				   int 	  xNumYears){
//	double interest = (rate/100.0)/12.0;
//	int n = nYears*12;
//	double temp = 1 + interest;
//	double top = pow(temp,n) - 1;
//	double bottom = interest*pow((1+interest),n);
//	double D = top/bottom;
//	double payment = amount/D;
//	return payment;
}

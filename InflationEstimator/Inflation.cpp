#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Project		: Function Basics
* Title			: InflationEstimator.cpp
* Author		: Nelson Wong
* 
*/




double rateOfInflation(double prevPrice, double currentPrice);

double rateOfInflation(double prevPrice, double currentPrice)
{
	printf("Would you like to calculate the inflation rate? ");
	char choice = getchar();
	if (strcmp(&choice, "Yes"))
	{
		rateOfInflation(5.03, 5.79);
	}
	double inflationRate = (currentPrice - prevPrice) / prevPrice;
	printf("%g", inflationRate);
	return inflationRate;
}

int main(void)
{
	double prevPrice = 0.0;
	double currentPrice = 0.0;
	// Try with cin, cout...


	while (rateOfInflation(prevPrice, currentPrice));
	
	return 0;
}
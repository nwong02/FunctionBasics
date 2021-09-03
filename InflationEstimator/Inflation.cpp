#include <stdio.h>
#include <stdlib.h>

/*
* Project		: Function Basics
* Title			: InflationEstimator.cpp
* Author		: Nelson Wong
* 
*/




double rateOfInflation(double prevPrice, double currentPrice);

double rateOfInflation(double prevPrice, double currentPrice)
{
	char choice[11] = { 0 };
	double inflationRate = 0.0;
	do
	{
		inflationRate = (currentPrice - prevPrice) / prevPrice;
		printf("%g\n", inflationRate);
	} while (choice == "Yes");
	
	return inflationRate;
}

int main(void)
{
	rateOfInflation(5.03, 5.79);
	return 0;
}
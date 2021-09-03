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
	double inflationRate = 0.0;
	do
	{
		inflationRate = (currentPrice - prevPrice) / prevPrice;
		printf("%f\n", inflationRate);
	} while ()
	
	return inflationRate;
}

int main(void)
{
	rateOfInflation(5.03, 5.79);
	return 0;
}
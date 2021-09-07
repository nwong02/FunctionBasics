#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
* Project		: Function Basics
* Title			: InflationEstimator.cpp
* Author		: Nelson Wong
* 
*/


using namespace std;


double rateOfInflation(double prevPrice, double currentPrice);

double rateOfInflation(double prevPrice, double currentPrice)
{
	double inflationRate = ((currentPrice - prevPrice) / prevPrice) * 100;
	cout << "The inflation rate is: " << inflationRate << "%" << endl;

	return inflationRate;
}

int main(void)
{
	do
	{
		double oldPrice = 0.0;
		double newPrice = 0.0;

		cout << "Enter the price of item from previous year: ";
		cin >> oldPrice;

		cout << "Enter the current price of the same item: ";
		cin >> newPrice;

		rateOfInflation(oldPrice, newPrice);
	} while (true);
	
	return 0;
}
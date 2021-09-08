#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* Project		: Clothing Sizes
* Title			: ClothingSize.cpp
* Author		: Nelson Wong
* Description	: Ask for user's height, weight, and age, and calculate their clothing sizes as appropriate based on formula. Program repeats as often as necessary
*/




/*
* Function		: hatSize()
* Description	: Calculates the hat size based on weight and height in lbs and inches respectively
* Parameters	: int weight, double height
* Returns		: hat size, dimensionless
*/

double hatSize(int weight, double height);

double hatSize(int weight, double height)
{
	char buffer[100] = { 0 };
	char reffub[100] = { 0 };

	double hatSize = (weight / height) * 2.9;

	printf("Enter the weight in pounds: ");
	fgets(buffer, 100, stdin);
	weight = atoi(buffer);

	printf("Enter the height in inches: ");
	fgets(reffub, 100, stdin);
	height = atof(reffub);

	printf("Your hat size is: %g", hatSize);
	return hatSize;
}





/*
* Function		: jacketSize()
* Description	: Calculates the jacket size based on weight and height in lbs and inches respectively, and the wearer's age in years. For every ten full years starting at 30, the jacket sizing will be adjusted with an additional 1/8 inch 
* Parameters	: int weight, double height, int age
* Returns		: jacket size, dimensionless
*/

double jacketSize(int height, double weight, int age);

double jacketSize(int height, double weight, int age)
{
	double jacketSizing = (height * weight) / 288;
	if (age > 30)
	{
		jacketSizing = jacketSizing + (1 / 8);
		
		printf("Your jacket size: %f\n", jacketSizing);
		return jacketSizing;
	}
}

int main()
{
	jacketSize(120, 53.5, 31);
	float fraction = 1.0 / 8.0;
	printf("%0.4f", fraction);
	return 0;
}
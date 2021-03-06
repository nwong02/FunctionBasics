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

	int ageCounter = (age - 30) / 10;

	for (age >= 30; age % 10 == 0; age++)
	{

		jacketSizing = jacketSizing + (1.0 / 8.0);
		printf("Your jacket size: %f\n", jacketSizing);
	}
	return jacketSizing;
}






/*
* Function		: waistSize()
* Description	: Calculates the waist size based on weight in lbs, and the wearer's age in years. For every two full years starting at 28, the waist sizing will be adjusted with an additional 1/10th of an inch
* Parameters	: double weight, int age
* Returns		: waist size, dimensionless
*/

double waistSize(double weight, int age);

double waistSize(double weight, int age)
{
	double waist = weight / 5.7;
	for (age >= 28; age % 2 == 0; age++)
	{
		waist = waist + (1.0 / 10.0);
		printf("Your waist size: %f", waist);
	}
	return waist;
}

int main()
{
	jacketSize(120, 53.5, 80);
	waistSize(120, 50);
	/*for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0)
		{
			printf("%d\n", i);
		}
	}*/

	return 0;
}
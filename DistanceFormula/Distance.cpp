#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* Project		: Distance Formula
* Title			: Distance.cpp
* Author		: Nelson Wong
* Description	: Calculate the distance between two arbitrary points on an x-y plane
*/





/*
* Function		: Distance()
* Description	: Based on user input of (x_1, y_1) and (x_2, y_2), calculate the distance between these two points using the distance formula
* Parameters	: double x_1, double y_1, double x_2, double y_2 for the pairs of points
* Returns		: Distance between two points
*/

double distance(double x_1, double y_1, double x_2, double y_2);

double distance(double x_1, double y_1, double x_2, double y_2)
{
	x_1 = 0.0;
	y_1 = 0.0;
	x_2 = 0.0;
	y_2 = 0.0;

	char xOne[10] = { 0 };
	char yOne[10] = { 0 };
	char xTwo[10] = { 0 };
	char yTwo[10] = { 0 };

	printf("Enter any point for x_1: ");
	fgets(xOne, 10, stdin);
	x_1 = atof(xOne);

	printf("Enter any point for y_1: ");
	fgets(yOne, 10, stdin);
	y_1 = atof(yOne);

	printf("Enter any point for x_2: ");
	fgets(xTwo, 10, stdin);
	x_2 = atof(xTwo);

	printf("Enter any point for y_2: ");
	fgets(yTwo, 10, stdin);
	y_2 = atof(yTwo);

	double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) * 1.0);
	printf("The distance between (%f, %f) and (%f, %f) is: %f \n", x_1, y_1, x_2, y_2, distance);

	return distance;
}


int main()
{
	distance(2, 2, 5, 5);
	return 0;
}
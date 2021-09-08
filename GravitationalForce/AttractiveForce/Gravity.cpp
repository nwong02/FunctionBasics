#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
* Project		: Attractive Force
* Title			: Gravity.cpp
* Author		: Nelson Wong
* Description	: Calculates the gravitational force of attraction between two input masses of objects in kg. Units are in standard SI units
*/


#define kGravitationalConstant 6.6743e-11

double gravitationalForce(double bodyOne, double bodyTwo, double radialDist);

double gravitationalForce(double bodyOne, double bodyTwo, double radialDist)
{
	double distanceSquare = pow(radialDist, 2);
	double gravitationalForce = kGravitationalConstant * (bodyOne * bodyTwo) / distanceSquare;
	
	printf("The gravitational force between these two bodies is: %e\n", gravitationalForce);

	return gravitationalForce;
}



int main()
{
	float massOne = 0.0;
	float massTwo = 0.0;
	float distance = 0.0;
	
	printf("Enter the value of the first mass in kg: ");
	scanf_s("%d", &massOne);
	
	printf("Enter the value of the second mass in kg: ");
	scanf_s("%d", &massTwo);

	printf("Enter the radial distance in metres: ");
	scanf_s("%d", &distance);

	gravitationalForce(massOne, massTwo, distance);

	return 0;
}
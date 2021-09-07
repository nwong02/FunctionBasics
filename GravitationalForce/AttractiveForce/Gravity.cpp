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
	double massOne = 0.0;
	double massTwo = 0.0;
	
	printf("Enter the value of the first mass: \n");
	printf("Enter the value of the second mass: \n");
	scanf("%f", &massOne);
	scanf("%f", &massTwo);

	return 0;
}
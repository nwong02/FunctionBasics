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

}



int main()
{
	double gravitationalConstant = kGravitationalConstant;
	printf("%e", gravitationalConstant);
	return 0;
}
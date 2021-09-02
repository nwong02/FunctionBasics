#include <stdio.h>
#include <stdlib.h>

/*
* Project		: Function Basics
* Title			: BiteRateFileSize.cpp
* Author		: Nelson Wong
* Description	: A program will read in the bitrate in kilobytes per second and duration in minutes, outputs the file size of the video clip in megabytes
*/


#define kMegaByte 8000

double bitRate(double bitsPerSecond, double duration);

double bitRate(double bitsPerSecond, double duration)
{
	double fileSize = (bitsPerSecond * duration) / kMegaByte;
	printf("The file size is: %f MBs", fileSize);

	return fileSize;
}



int main(void)
{
	bitRate(17406, 3);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
* File			: DayOfWeekCalculator.cpp
* Project		: Day of Week 
* Author		: Nelson Wong
* Description	: This program will receive an input date and calculates the day of the week that that date corresponds to. Implementation will have several functions embedded, a leap year function, century value function, get year function, and a get month function calculator
*/


/*
* Function		: isLeapYear
* Description	: Function will return true of the year provided is a leap year, false if not
* Parameters	: int year
* Returns		: boolean, true or false
*/

bool isLeapYear(int year);

bool isLeapYear(int year)
{
	if ((year % 400 == 2) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		printf("%d is a leap year\n", year);
		return true;
	}
	else
	{
		printf("%d is not a leap year\n", year);
		return false;
	}
}





/*
* Function		: getCenturyValue
* Description	: Function will take the first two digits of the year provided, divide by 4, and subtracted from 3, then multiplied by 2
* Parameters	: int year
* Returns		: 1 if successful
*/

int getCenturyValue(int year);

int getCenturyValue(int year)
{
	int remainingValue = (year / 100) % 4;
	int remainder = (3 - remainingValue) * 2;
	printf("%d\n", remainder);
	return remainder;
}




/*
* Function		: getYearValue
* Description	: Function will compute a value based on years by extracting last two digits of the year provided, then factoring in leap year
* Parameters	: int year
* Returns		: Value of remainder divided by 4 and last digits in year
*/

int getYearValue(int year);

int getYearValue(int year)
{
	int lastDigits = year % 100;
	int remainder = lastDigits / 4;
	return remainder + lastDigits;
}



/*
* Function		: getMonthValue
* Description	: Function will return a value based on the table given in the text (Savitch 7th ed.), invoking the leap year condition.
* Parameters	: int month, int year
* Returns		: Return value corresponding to each month
*/

int getMonthValue(int month, int year);

int getMonthValue(int month, int year)
{
	int monthReturnValue = 0;
	switch (month)
	{
	case 1:
		if (isLeapYear(year) == true)
		{
			monthReturnValue = 6;
		}
		else
		{
			monthReturnValue = 0;
		}
		break;
	case 2:
		if (isLeapYear(year) == true)
		{
			monthReturnValue = 2;
		}
		else
		{
			monthReturnValue = 3;
		}
		break;
	case 3:
		monthReturnValue = 3;
		break;
	case 4:
		monthReturnValue = 6;
		break;
	case 5:
		monthReturnValue = 1;
		break;
	case 6: 
		monthReturnValue = 4;
		break;
	case 7:
		monthReturnValue = 6;
		break;
	case 8:
		monthReturnValue = 2;
		break;
	case 9:
		monthReturnValue = 5;
		break;
	case 10: 
		monthReturnValue = 0;
		break;
	case 11:
		monthReturnValue = 3;
		break;
	case 12:
		monthReturnValue = 5;
		break;
	}

	return monthReturnValue;
}



char date(int getMonthValue(), int getYearValue(), int getCenturyValue())
{

}


int main(void)
{
	getMonthValue(2, 2020);
	/*getYearValue(2008);
	getCenturyValue(2008);
	isLeapYear(2017);*/
	return 0;
}
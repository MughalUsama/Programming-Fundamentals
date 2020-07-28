#include <iostream>
using namespace std;
//PROTOTYPES
bool isNumberOdd(int number);
int calculateStreetNo();
bool isDigitsDifferent(int);
bool isDigitsInProportion(int);
bool isSumCorrect(int number);

int main()
{
	cout << "The street number is: " << calculateStreetNo() ;
	system("pause");
}

//FUNCTION DEFINITIONS
int calculateStreetNo()
{
	for (int i = 1; i < 10000; i=i+1)
	{
		int streetNumber = i;
		if (isNumberOdd(streetNumber))
		{
			if (isDigitsDifferent(streetNumber))
			{
				if (isDigitsInProportion(streetNumber))
				{
					if (isSumCorrect(streetNumber))
					{
						return streetNumber;
					}
				}
			}
		}
	}

}

bool isDigitsDifferent(int number)
{
	bool digitsDifferent = true;
	int digit1, digit2;
	digit1 = number % 10;
	while (number>0 && digitsDifferent==true)
	{
		number = number / 10;
		digit2 = number % 10;
		if (digit1==digit2)
		{
			digitsDifferent = false;
		}
		digit1 = digit2;

	}
	return digitsDifferent;
}

bool isDigitsInProportion(int number)
{
	int digit1, digit2;
	for (int i = 1; i < 5; i=i+1)
	{

		if (i==2)
		{
			digit1 = number % 10;

		}
		else if(i==4)
		{
			digit2 = number % 10;

		}
		number = number / 10;
	}
	if (digit2==3*digit1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isNumberOdd(int number)
{
	if (number % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isSumCorrect(int number)
{
	int sum = 0;
	while (number>0)
	{
		sum = sum + (number % 10);
		number = number / 10;
	}
	if (sum==27)
	{
		return true;
	}
	else
	{
		return false;
	}


}
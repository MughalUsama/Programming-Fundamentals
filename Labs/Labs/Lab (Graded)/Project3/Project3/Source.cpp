#include <iostream>
using namespace std;


void displayInEnglish(int);
int calcLength(int);
void convertToEnglish(int, int);
int calcDivisor(int);
void displayTenthPlace(int);
bool displayDigit(int, bool);
bool digitInEnglish(int, int, bool);
void digitWeightInEnglish(int);


int main()
{
	int numberInDigits;
	cout << "Enter the number: ";
	cin >> numberInDigits;
	cout << "   ";
	displayInEnglish(numberInDigits);
	cout << "\n";
	system("pause");
	return 0;
}
//
void displayInEnglish(int number)
{
	int length=calcLength(number);
	convertToEnglish(number, length);
}
// length
int calcLength(int number)
{
	int length = 0;
	while (number>0)
	{
		length = length + 1;
		number = number / 10;
	}
	cout << "\n length" << length;
	return length;
}

// convert to english
void convertToEnglish(int number, int length)
{
	bool tenFlag = false;
	for (int i = length; i > 0; i=i-1)
	{
		int digit = number / calcDivisor(i);
		digitInEnglish(digit, i, tenFlag);
		if (!(i==1 || i==2 || i==5 || i==8))
		{
			digitWeightInEnglish(i);
		}
		number = number % calcDivisor(i);
	}

}
//calculate divisor
int calcDivisor(int length)
{
	int divisor = 1;
	for (int i = 1; i < length; i=i+1)
	{
		divisor = divisor * 10;
	}
	return divisor;
}

// digits in english
bool digitInEnglish(int digit, int position, bool tenFlag)
{
	
	if (position == 2 || position == 5 || position == 8)
	{
		if (digit == 1)
		{
			tenFlag = true;
		}
		else
		{
			displayTenthPlace(digit);
		}
	}
	else
	{
		displayDigit(digit, tenFlag);
	}
	return tenFlag;
} 

// digit weight
void digitWeightInEnglish(int position)
{
	if (position==10)
	{
		cout << " billion";
	}
	else if (position==9 || position==6 || position==3)
	{
		cout << " hundred";
	}
	else if (position == 7)
	{
		cout << " million";
	}
	else if (position == 4)
	{
		cout << " thousand";
	}
}
//  1    		2					3	 4				5				  6   	7    	    	8      				9    5
// one [billion two [hundred and thirty four [million five [hundred and sixty seven [thousand eight [hundred and ninety five only
// 10			9					8	 7				6				  5		4				3					2  	1


// display tenth place
void displayTenthPlace(int digit)
{  
	
	switch (digit)
	{
	
		case 2:
			cout << " and twenty";
			break;
		case 3:
			cout << " and thirty";
			break;
		case 4:
			cout << " and fourty";
			break;
		case 5:
			cout << " and fifty";
			break;
		case 6:
			cout << " and sixty";
			break;
		case 7:
			cout << " and seventy";
			break;
		case 8:
			cout << " and eighty";
			break;
		case 9:
			cout << " and ninety";
			break;
	}

}

// display tenth place
bool displayDigit(int digit, bool tenFlag)
{
	if (tenFlag==false)
	{
		switch (digit) 
		{
		case 1:
			cout << " one";
			break;
		case 2:
			cout << " two";
			break;
		case 3:
			cout << " three";
			break;
		case 4:
			cout << " four";
			break;
		case 5:
			cout << " five";
			break;
		case 6:
			cout << " six";
			break;
		case 7:
			cout << " seven";
			break;
		case 8:
			cout << " eight";
			break;
		case 9:
			cout << " nine";
			break;
		}
	
	}
	else
	{
		switch (digit)
		{
		case 0:
			cout << " ten";

			break;
		case 1:
			cout << " eleven";
			break;
		case 2:
			cout << " twelwe";
			break;
		case 3:
			cout << " thirteen";
			break;
		case 4:
			cout << " fourteen";
			break;
		case 5:
			cout << " fifteen";
			break;
		case 6:
			cout << " sixteen";
			break;
		case 7:
			cout << " seventeen";
			break;
		case 8:
			cout << " eighteen";
			break;
		case 9:
			cout << " nineteen";
			break;
		}
		tenFlag = false;
		return tenFlag;
	}
}


#include <iostream>
using namespace std;
int convertToDecimal(int, int);
int calcWeight(int, int);
int convertToTargetBase(int, int = 10, int = 2);
bool isSourceBaseCorrect(int, int);
int main()
{
	int sourceBase, targetBase, number;
	cout << "Enter source base: ";
	cin >> sourceBase;
	cout << "Enter the number: ";
	cin >> number;
	cout << "Enter the target base: ";
	cin >> targetBase;
	if (isSourceBaseCorrect(number, sourceBase))
	{
		cout << "Given number in target base is: " << convertToTargetBase(number, sourceBase, targetBase);
	}
	else
	{
		cout << "Given number in target base is: " << convertToTargetBase(number);
	}

	
	cout << "\n";
	system("pause");
	return 0;
}

bool isSourceBaseCorrect(int number, int sourceBase)
{
	bool isBaseCorrect = true;
	while (number>0)
	{
		if (number%10>=sourceBase)
		{
			isBaseCorrect = false;
			
		}
		number = number / 10;
	}
	return isBaseCorrect;
}

int convertToTargetBase(int number, int sourceBase, int targetBase)
{
	int decimalValue;
	decimalValue = convertToDecimal(number, sourceBase);
	int targetValue = 0, multiplier = 1;
	while (decimalValue>0)
	{
		int digit;
		digit = decimalValue % targetBase;
		targetValue = targetValue + (digit * multiplier);
		multiplier = multiplier * 10;
		decimalValue = decimalValue / targetBase;
		
	}
	return targetValue;
}

int convertToDecimal(int number, int sourceBase)
{
	int decimalValue = 0, power = 0;
	
	while (number>0)
	{
		int digit, decimalDigit;
		digit = (number % 10);
		number = number / 10;
		decimalDigit = digit * calcWeight(sourceBase, power);
		decimalValue = decimalValue + decimalDigit;
		power = power + 1;
	}
	return decimalValue;
}

int calcWeight(int sourceBase, int power)
{
	int weight=1;
	for (int i = 1; i <= power; i=i+1)
	{
		weight = weight * sourceBase;
	}
	return weight;
}

#include <iostream>
using namespace std;
// prototypes
int calcPower(int noOfTerm);
double calcDenominator(int noOfTerm);
double calcNumerator(double number, int noOfTerm);
double calcTerm(double number, int noOfTerm);
double calcSumOfTerms(double number, int noOfTerms);
double calcCosine(double number, int noOfTerms);

int main()
{
	double number;
	int noOfTerms;
	cout << "Enter the value to find Cos: ";
	cin >> number;
	cout << "Enter the no of terms: ";
	cin >> noOfTerms;
	cout << "The cosine is: "<<calcCosine(number,noOfTerms);
	cout << "\n";
	system("pause");
	return 0;
}

// function definitions:

int calcPower(int noOfTerm)
{
	int power;
	power = noOfTerm * 2;
	return power;
}

double calcDenominator(int noOfTerm)
{
	int denominator = 1;
	for (int i = 1; i <= 2 * noOfTerm; i = i + 1)
	{
		denominator = denominator * i;
	}
	return denominator;
}

double calcNumerator(double number, int noOfTerm)
{
	double numerator = 1;

	for (int i = 1; i <= calcPower(noOfTerm); i = i + 1)
	{
		numerator = numerator * number;
	}
	return numerator;
}
double calcTerm(double number, int noOfTerm)
{
	double term;
	term = calcNumerator(number, noOfTerm) / calcDenominator(noOfTerm);
	if (noOfTerm % 2 == 0)
	{
		term = -term;
	}
	return term;
}
double calcSumOfTerms(double number, int noOfTerms)
{
	double sumOfTerms = 0;

	for (int i = 2; i <= noOfTerms; i = i + 1)
	{
		//i is current term...
		sumOfTerms = sumOfTerms + calcTerm(number, i);
	}
	return sumOfTerms;
}

double calcCosine(double number, int noOfTerms)
{

	int cosine;
	cosine = 1 - calcSumOfTerms(number, noOfTerms);
	return cosine;
}

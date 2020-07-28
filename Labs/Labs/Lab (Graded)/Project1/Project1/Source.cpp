#include <iostream>
#include <ctime>
using namespace std;

int generateRandomNumber(int, int);

int main()
{
	int lowerBound, upperBound;
	cout << "Enter the lower range of number: ";
	cin >> lowerBound;
	cout << "Enter the upper range of number: ";
	cin >> upperBound;
	cout << "Random number in given range is: "<< generateRandomNumber(lowerBound, upperBound);
	srand(time(0));
	cout << "\n";
	system("pause");
	return 0;
}


int generateRandomNumber(int lowerBound, int upperBound)
{
	int randomNumber;	randomNumber = lowerBound + (rand() % (upperBound - lowerBound + 1));
	return randomNumber;
}
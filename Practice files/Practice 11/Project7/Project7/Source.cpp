#include <iostream>
#include <ctime>
using namespace std;

void authenticatePin(int array[], int size, int originalPin);
void generateRandomArrayElements(int array[], int size);
void displayRandomSequence(int array[], int size);
int generatePinFromRandomNo(int array[], int size, int originalPin);

int main()
{
	int array[10];
	int pin = 123456789;
	srand(time(0));
	authenticatePin(array, 10, pin);

	cout << "\n";
	system("pause");
}

void authenticatePin(int array[], int size, int originalPin)
{
	int enteredPin, generatedPin;
	generateRandomArrayElements(array, size);
	displayRandomSequence(array, size);
	cout << "\n Enter your pin: ";
	cin >> enteredPin;
	generatedPin = generatePinFromRandomNo(array, size, originalPin);
	if (generatedPin==enteredPin)
	{
		cout << "<Authentication Successful!>";
	}
	else
	{
		cout << "<Authentication Unuccessful!>";
	}
}

void generateRandomArrayElements(int array[], int size)
{
	for (int i = 0; i < size; i=i+1)
	{
		array[i] = 1 + rand() % 3;
	}
}

void displayRandomSequence(int array[], int size)
{
	cout << "PIN :\t";
	for (int i = 0; i < size; i = i + 1)
	{
		cout << " " << i;
	}

	cout << "\nNUM :\t";
	for (int j = 0; j < size; j = j + 1)
	{
		cout << " " << array[j];
	}
}

int generatePinFromRandomNo(int array[], int size, int originalPin)
{
	int digit, index, generatedPin = 0, multiplier = 1;
	while (originalPin > 0)
	{
		index = originalPin % 10;
		generatedPin = generatedPin + (array[index] * multiplier);
		multiplier = multiplier * 10;
		originalPin = originalPin / 10;
	}
	return generatedPin;
}
#include <iostream>
using namespace std;
void inputRatings(int array[], int size);
void displayResults(int array[], int size);
int calculateFrequency(int array[], int size, int rating);


int main()
{
	int array[40];
	inputRatings(array, 40);
	displayResults(array, 40);
	cout <<  "\n";
	cin.ignore();
	cin.get();
}


void displayResults(int array[], int size)
{
	cout << "\n\tRating\tFrequency\n";
	for (int i = 1; i <= 10; i=i+1)
	{
		cout << "\t" << i << "\t " <<calculateFrequency(array, size, i) << "\n";

	}
}

int calculateFrequency(int array[], int size, int rating)
{
	int frequency = 0;
	for (int i = 0; i < size; i=i+1)
	{
		if (array[i]==rating)
		{
			frequency = frequency + 1;
		}

	}
	return frequency;
}

void inputRatings(int array[], int size)
{
	for (int i = 0; i < size; i = i + 1)
	{
		cout << "Rating of student " << i + 1 <<" : "; 
		cin >> array[i];
	}
}

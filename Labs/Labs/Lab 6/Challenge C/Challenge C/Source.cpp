#include <iostream>
using namespace std;
int main()
{
	int totalBees, counter, years,currentMale, previousMale, currentFemale, previousFemale, totalMale ;
	cout << "\n\nEnter the number of years: ";
	cin >> years;
	counter = 1;
	int total;
	previousFemale = 0;
	previousMale = 1;
	totalBees = previousMale+1;
	totalMale = previousMale;
	while (counter < years)
		{
	
		currentMale = previousFemale + previousMale;
		currentFemale = previousMale;
		totalBees = totalBees + currentFemale + currentMale;
		totalMale = totalMale + currentMale;
		counter = counter + 1;
		previousMale = currentMale;
		previousFemale = currentFemale;
		}


	cout << "\n\n\t\t-:After " << years << " years:-\n";
	cout <<"\n\t        Total male bees: " <<totalMale << "\n";
	cout << "\t   Total(Male & Female)bees: " << totalBees;
	cout << "\n\n";
	system("pause");
	return 0;
}
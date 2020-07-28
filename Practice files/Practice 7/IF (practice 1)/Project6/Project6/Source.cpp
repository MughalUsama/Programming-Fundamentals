#include <iostream>
using namespace std;
int main()
{
	float weightOnEarth, weightOnPlanet;
	int noOfPlanet;
	cout << "Enter your weight on Earth: ";
	cin >> weightOnEarth;
	cout << "1.VENUS      2.MARS      3.JUPITER\n";
	cout << "4.SATURN     5.URANUS    6.NEPTUNE\n";
	cout << "Which planet are you visiting: ";
	cin >> noOfPlanet;
	if (noOfPlanet==1)
	{
		weightOnPlanet = 0.78*weightOnEarth;
	}
	else if (noOfPlanet == 2)
	{
		weightOnPlanet = 0.39*weightOnEarth;
	}
	else if (noOfPlanet == 3)
	{
		weightOnPlanet = 2.65*weightOnEarth;
	}
	else if (noOfPlanet == 4)
	{
		weightOnPlanet = 1.17*weightOnEarth;
	}
	else if (noOfPlanet == 5)
	{
		weightOnPlanet = 1.05*weightOnEarth;
	}
	else if (noOfPlanet == 6)
	{
		weightOnPlanet = 1.23*weightOnEarth;
	}
	cout << "Your weight would be " << weightOnPlanet << " pounds on that planet.";
	cout << "\n";
	system("pause");
	return 0;
}
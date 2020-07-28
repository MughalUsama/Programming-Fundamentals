#include <iostream>
using namespace std;
int main()
{
	double mass1, mass2, distance, constantK, force;
	mass1 = 200;
	mass2 = 670;
	distance = 20;
	constantK = 0.0000000667;
	force = constantK * ((mass1*mass2) / (distance*distance));
	cout << "Force between bodies is: " << force;
	cout << "\n";
	system("pause");
	return 0;
}
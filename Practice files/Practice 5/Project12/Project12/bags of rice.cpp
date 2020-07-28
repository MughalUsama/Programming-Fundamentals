#include <iostream>
using namespace std;
int main()
{
	int noOfBags;
	int oneMetricTon;
	float PoundsPerBag;
	oneMetricTon = 2205;
	PoundsPerBag = 25;
	noOfBags = oneMetricTon / PoundsPerBag;
	cout << "NO. of bags of rice: " << noOfBags;
	cout << "\n";
	system("pause");
	return 0;

}
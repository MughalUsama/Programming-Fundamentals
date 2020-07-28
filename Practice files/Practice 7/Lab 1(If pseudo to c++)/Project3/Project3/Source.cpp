#include <iostream>
using namespace std;
int main()
{
	float cookieIn1Box, boxesIn1Container, totalCookies, totalBoxes, totalContainers, leftOverBoxes, leftOverCookies, leftOverContainers;
	cout << "Enter total no. of cookies: ";
	cin >> totalCookies;
	cout << "Enter cookies per box: ";
	cin >> cookieIn1Box;
	cout << "Enter boxes per container: ";
	cin >> boxesIn1Container;
	totalBoxes = totalCookies / cookieIn1Box;
	leftOverCookies = (totalBoxes - (int)totalBoxes) * cookieIn1Box;
	totalBoxes = (int)totalBoxes;
	totalContainers = totalBoxes / boxesIn1Container;
	leftOverBoxes = (totalContainers - (int)totalContainers) * boxesIn1Container*0.1;
	cout << leftOverBoxes;
	totalContainers = (int)totalContainers;
	cout << "No. of boxes: " << totalBoxes << "\n";
	cout << "No. of containers: " << totalContainers<< "\n";
	if (leftOverCookies!=0)
	{
		cout << "Left over cookies are: " << leftOverCookies<< "\n";
	}
	if (leftOverBoxes!=0)
	{
		cout << "Left over boxes are: " << leftOverBoxes;
	}
	cout << "\n";
	system("pause");
	return 0;
}
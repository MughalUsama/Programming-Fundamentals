#include<iostream>
using namespace std;
int main()
{
	float distance1, distance2, distance3, totalDistance1, totalDistance2, totalDistance3, totalDistance4;
	cout << "Enter distance of shop 1 from your place: ";
	cin >> distance1;
	cout << "Enter distance of shop 2 from your place: ";
	cin >> distance2;
	cout << "Enter distance between shop 1 and shop 2: ";
	cin >> distance3;
	totalDistance1 = distance1 + distance3 + distance2;
	totalDistance2 = distance1 + distance3 + distance3 + distance1;
	totalDistance3 = distance2 + distance3 + distance3 + distance2;
	totalDistance4 = distance1 + distance1 + distance2 + distance2;
	if (totalDistance1 <= totalDistance2 && totalDistance1 <= totalDistance3 && totalDistance1 <= totalDistance4)
	{
		cout << "Shortest Distance is: " << totalDistance1;
	}
	else if (totalDistance2 <= totalDistance1 && totalDistance2 <= totalDistance3 && totalDistance2 <= totalDistance4)
	{
		cout << "Shortest Distance is: " << totalDistance2;
	}
	else if (totalDistance3 <= totalDistance1 && totalDistance3 <= totalDistance2 && totalDistance3 <= totalDistance4)
	{
		cout << "Shortest Distance is: " << totalDistance3;
	}
	else if (totalDistance4 <= totalDistance1 && totalDistance4 <= totalDistance2 && totalDistance4 <= totalDistance3)
	{
		cout << "Shortest Distance is: " << totalDistance4;
	}

	cout << "\n";
	system("pause");
	return 0;
}
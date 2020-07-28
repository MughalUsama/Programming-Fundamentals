#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float radiusSum, radius1, radius2, centerDistance;
	int x1, x2, y1, y2;
	cout << "Circle-1 Center: ";
	cin >> x1 >> y1;
	cout << "Circle-1 Radius: ";
	cin >>radius1;
	cout << "Circle-2 Center: ";
	cin >> x2 >> y2;
	cout << "Circle-2 Radius: ";
	cin >> radius2;
	radiusSum = radius1 + radius2;
	centerDistance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
	if (centerDistance<radiusSum)
	{
		cout << "overlapped";
	}
	else
	{
		cout << "not overlapped";
	}

	cout << "\n";
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char ch;
	cin >> x >> y;
	cin.ignore(50, '\n');
	cin >> ch;
	cout << x << ":" << y << ":" << ch;
	cout << "\n";
	system("pause");
	return 0;
}
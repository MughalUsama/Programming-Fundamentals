#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char ch;
	cin >> x >> ch >> y;
	cin.get(ch);
	cout << x << "\n";
	cout << y << "\n";
	cout << ch;
	cout << "\n";
	system("pause");
	return 0;
}
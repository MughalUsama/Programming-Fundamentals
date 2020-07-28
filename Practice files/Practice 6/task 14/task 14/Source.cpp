#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float yens_Per_Dollar = 106.21, euros_Per_Dollar = 0.81, dollars, totalYens, totalEuros;
	cout << "Enter the amount in dollars : ";
	cin >> dollars;
	totalEuros = euros_Per_Dollar * dollars;
	totalYens = yens_Per_Dollar * dollars;
	cout << fixed << setprecision(2) << "Total euros in " << dollars << " $ are " <<totalEuros << "\n";
	cout << fixed << setprecision(2) << "Total yens in " << dollars << " $ are " << totalYens << "\n";
	cout << "\n";
	system("pause");
	return 0;
}
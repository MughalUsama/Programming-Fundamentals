#include <iostream>
using namespace std;

void convertToCelsius(int fahrenheit)
{
	double celsius = (5.0 / 9.0) * (fahrenheit - 32);
	cout << "\t" << fahrenheit << "\t~\t" << celsius << "\n";

}

int main()

{
	cout << "In fahrenheit" << "\t|\t" << "In celcius" << "\n" << "-----------------------------------" << "\n";
	for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit = fahrenheit + 1)
	{
		convertToCelsius(fahrenheit);
	}
	cout << "------------------------------------";
	cout << "\n";
	system("pause");
	return 0;
}
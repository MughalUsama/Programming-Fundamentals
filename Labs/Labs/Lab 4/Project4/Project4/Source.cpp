#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double current, voltage, resistance, inductance, capacitance, frequency, pi, divisor;
	pi = 3.1416;
	cout << "Enter the voltage in volts: ";
	cin >> voltage;
	cout << "Enter the Resistance in ohms: ";
	cin >> resistance;
	cout << "Enter the inductance in henrys: ";
	cin >> inductance;
	cout << "Enter the capacitance in farads: ";
	cin >> capacitance;
	cout << "Enter the frequency in hertz: ";
	cin >> frequency;
	divisor = pow(pow(resistance, 2) + pow((2 * pi*frequency*inductance) - (1 / (2 * pi*frequency*capacitance)),2), 0.5);
	current = voltage / divisor;
	cout << current << "amperes";
	cout << "\n";
	system("pause");
	return 0;
}
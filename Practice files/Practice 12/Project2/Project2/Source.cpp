#include <iostream>
using namespace std;

void getInputsInArray(int [], int [], float [], float []);
void displayWages(int[], float[]);

int main()
{
	int empId[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 }, hours[7];
	float payRate[7], wages[7];
	getInputsInArray(empId, hours, payRate, wages);
	displayWages(empId, wages);
	cout << "\n";
	system("pause");
	return 0;
}

void getInputsInArray(int empId[], int hours[], float payRate[], float wages[])
{
	for (int i = 0; i < 7; i = i + 1)
	{
		cout << "\n\t\tEmployee ID : " << empId[i] << "\n";
		cout << "Enter numbers of hours worked by employee: ";
		do
		{
			cin >> hours[i];
		} while (hours[i]<0);
		
		cout << "Enter the pay rate of employee: ";
		do
		{
			cin >> payRate[i];
		} while (payRate[i]<6.00);
		
		wages[i] = payRate[i] * hours[i];
	}
}

void displayWages(int empId[], float wages[])
{
	for (int i = 0; i < 7; i=i+1)
	{
		cout << "\n\t"<<i+1<<".) Employee ID: " << empId[i] << " :-- Employee Wages: " << wages[i];
	}
}
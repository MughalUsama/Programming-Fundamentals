#include <iostream>
using namespace std;
int main()
{
	int choice;
	float radius, length, width, pi, area, base, height;
	pi = 3.14159;
	cout << "GEOMETRY CALCULATOR\n";
	cout << "1. Calculate the area of Circle \n";
	cout << "2. Calculate the area of Rectangle \n";
	cout << "3. Calculate the area of Triangle \n";
	cout << "4. EXIT\n";
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice==1)
	{
		cout << "Enter the radius: ";
		cin >> radius;
		if (radius<0)
		{
			cout << "Enter positive value.";
		}
		else
		{
			cout << "Area is : " << pi * radius * radius;
		}

	}
	if (choice==2)
	{
		cout << "Enter length: ";
		cin >> length;
		cout << "Enter width: ";
		cin >> width;
		if (length < 0 || width < 0)
		{
			cout << "Enter positive value.";
		}
		else
		{
			cout << "Area is : " << length * width;
		}
	}
	if (choice==3)
	{
		cout << "Enter base : ";
		cin >> base;
		cout << "Enter height : ";
		cin >> height;
		if (base < 0 || height < 0)
		{
			cout << "Enter positive value.";
		}
		else
		{
			cout << "Area is : " << 0.5*base*height;
		}
	}
	if (choice==4)
	{
		cout << "Program ends.";
	}
	cout << "\n";
	system("pause");
	return 0;
}
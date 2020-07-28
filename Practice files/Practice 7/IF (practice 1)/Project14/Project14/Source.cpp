#include <iostream>
using namespace std;
int main()
{
	float marks, totalMarks;
	int percentage;
	cout << "Enter the marks: ";
	cin >> marks;
	cout << "Enter the TOTAL marks: ";
	cin >> totalMarks;
	percentage = marks / totalMarks * 100;
	if (percentage>=0 && percentage<=49)
	{
		cout << "Grade is F \n";
		cout << "Grade point is 0";
	}
	else if (percentage >= 50 && percentage <= 54)
	{
		cout << "Grade is D \n";
		cout << "Grade point is 1";
	}
	else if (percentage >= 55 && percentage <= 57)
	{
		cout << "Grade is C- \n";
		cout << "Grade point is 1.7";
	}
	else if (percentage >= 58 && percentage <= 60)
	{
		cout << "Grade is C \n";
		cout << "Grade point is 2";
	}
	else if (percentage >= 61 && percentage <= 64)
	{
		cout << "Grade is C+ \n";
		cout << "Grade point is 2.3";
	}
	else if (percentage >= 65 && percentage <= 69)
	{
		cout << "Grade is B- \n";
		cout << "Grade point is 2.7";
	}
	else if (percentage >= 70 && percentage <= 74)
	{
		cout << "Grade is B \n";
		cout << "Grade point is 3";
	}
	else if (percentage >= 75 && percentage <= 79)
	{
		cout << "Grade is B+ \n";
		cout << "Grade point is 3.3";
	}
	else if (percentage >= 80 && percentage <= 84)
	{
		cout << "Grade is A- \n";
		cout << "Grade point is 3.7";
	}
	else if (percentage >= 85)
	{
		cout << "Grade is A \n";
		cout << "Grade point is 4";
	}

	cout << "\n";
	system("pause");
	return 0;
}
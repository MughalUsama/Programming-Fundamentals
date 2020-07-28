#include <iostream>
using namespace std;
int main()
{
	float gradePoints, crHours, marks,totalGradePoints, cummulativeGradePoint, gpa, subjects, counter, totalCrHours;
	marks = 0;
	cummulativeGradePoint = 0;
	totalCrHours = 0;
	counter = 0;
	cout << "Enter number of subjects: ";
	cin >> subjects;
	while (counter < subjects)
	{
		cout << "Enter marks in subject no. " << counter + 1 << ": ";
		cin >> marks;
		
		if (marks<=49)
		{
			gradePoints = 0;

		}
		else if (marks >= 50 && marks <= 54)
		{
			gradePoints = 1;
		}
		else if (marks >= 55 && marks <= 57)
		{
			gradePoints = 1.7;
		}
		else if (marks >= 58 && marks <= 60)
		{
			gradePoints = 2;
		}
		else if (marks >= 61 && marks <= 64)
		{
			gradePoints = 2.3;
		}
		else if (marks >= 65 && marks <= 69)
		{
			gradePoints = 2.7;
		}
		else if (marks >= 70 && marks <= 74)
		{
			gradePoints = 3;
		}
		else if (marks >= 75 && marks <= 79)
		{
			gradePoints = 3.3;
		}
		else if (marks >= 80 && marks <= 84)
		{
			gradePoints = 3.7;
		}
		else if (marks >= 85 && marks <= 100)
		{
			gradePoints = 4;
		}
		cout << "Enter the number of credit hours: ";
		cin >> crHours;
		totalCrHours = totalCrHours + crHours;
		totalGradePoints=(crHours*gradePoints);
		cummulativeGradePoint = totalGradePoints + cummulativeGradePoint;
		counter = counter + 1;
	}
	cout << "Your GPA is " << cummulativeGradePoint / totalCrHours;
	cout << "\n";
	system("pause");
	return 0;
}
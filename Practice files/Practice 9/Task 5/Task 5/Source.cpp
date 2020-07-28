#include <iostream>

using namespace std;
int main()
{
	char name1[20], name2[20], name[20], startOfLine[20], endOfLine[20];
	int counter = 2, noOfStudents, compare;
	bool inputCount=true;
	while (inputCount)
	{
		cout << "\nEnter the number of students: ";
		cin >> noOfStudents;
		if (noOfStudents > 1 && noOfStudents <= 25)
		{
			inputCount = false;
		}
		else
		{
			cout << "Enter value b/w 1 and 25.";
		}
		
	}
	cout << "\nEnter the name of student: ";
	cin >> name1;
	cout << "\nEnter the name of student: ";
	cin >> name2;
	
	compare = strcmp(name1, name2);
	if (compare == 1)
	{
		strcpy_s(startOfLine, name2);
		strcpy_s(endOfLine, name1);
	}
	else
	{
		strcpy_s(startOfLine, name1);
		strcpy_s(endOfLine, name2);
	}
	while (counter<noOfStudents)

	{
		cout << "\nEnter the name of student: ";
		cin>>name;
		
		compare = strcmp(startOfLine, name);
		if (compare==1)
		{
			strcpy_s(startOfLine,name);
		}
		compare = strcmp(endOfLine, name);
		if (compare != 1)
		{

			strcpy_s(endOfLine, name);
		}

		counter = counter + 1;

	}
	cout << "\nStudent at start of line is: " << startOfLine;
	cout << "\nStudent at end of line: " << endOfLine;
	cout << "\n";
	system("pause");
	return 0;
}
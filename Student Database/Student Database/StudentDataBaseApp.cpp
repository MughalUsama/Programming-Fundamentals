#include<iostream>
#include <iomanip>
#include"StudentDataBaseOperations.h"

using namespace std;

void studentDatabase()
{
	const int size = 60;
	int rollNo[size];
	float cgpa[size];
	int recordCount = 0;
	int choice;
	int enteredRollNo;
	float enteredCgpa;
	bool appRunFlag = true;

	do
	{
		cout << "\n\n\t\t\t\t  |||||||||||| STUDENT DATABASE ||||||||||||\n";
		cout << "\n\t\t\t\t Enter 1 ~ To Add Record . ";											//complete.
		cout << "\n\t\t\t\t Enter 2 ~ To Search Record . ";											//complete.
		cout << "\n\t\t\t\t Enter 3 ~ To Display All Records . ";									//complete.
		cout << "\n\t\t\t\t Enter 4 ~ To Display Records With CGPA >= X . ";						//complete.
		cout << "\n\t\t\t\t Enter 5 ~ To Display Records With CGPA <= X . ";						//complete.
		cout << "\n\t\t\t\t Enter 6 ~ To Display Class Average CGPA . ";							//complete.
		cout << "\n\t\t\t\t Enter 7 ~ To Remove a Record with Roll No = Y . ";						//complete.
		cout << "\n\t\t\t\t Enter 8 ~ To Update CGPA With Roll No = Y . ";							//complete.
		cout << "\n\t\t\t\t Enter 0 ~ To Close the Application . \n\n Your Choice : ";				//complete.
		cin >> choice;					 //input choice

		switch (choice)    // Choice selection
		{
		case 1:
		{
			cout << "\n Enter Roll No to Add record: ";
			cin >> enteredRollNo;
			cout << "\n Enter the CGPA: ";
			cin >> enteredCgpa;
			int status = addStudentRecord(rollNo, cgpa, &recordCount, size, enteredRollNo, enteredCgpa);
			if (status == 1)
			{
				cout << "\n\t\t\t\t\t*** Record Successfully Added ***";
			}
			else if (status == 2)
			{
				cout << "\n\t\t\t\t\t*** Database is Full ***";
			}
			else
			{
				cout << "\t\t\t\t*** Record with Roll No:" << enteredRollNo << " already Exists ***";

			}
			break;
		}
		case 2:
		{
			cout << "\n Enter Roll No : ";
			cin >> enteredRollNo;
			int status = findStudentRollNo(rollNo, recordCount, enteredRollNo);
			if (status != -1)
			{
				int index = findStudentRollNo(rollNo, recordCount, enteredRollNo);
				cout << "\n\t\t\t\t\t Roll No      CGPA";
				cout << "\n\t\t\t\t\t -------     ------";
				cout.fill(' ');
				cout << "\n\t\t\t\t\t" << setw(8) << right << rollNo[index] << setw(11) << right << cgpa[index];
			}
			else
			{
				cout << "\n\t\t\t\t\t *** No Record Found ***";
			}
			break;
		}
		case 3:
			displayAllRecords(rollNo, cgpa, recordCount);
			break;
		case 4:
		{
			cout << "\n Enter the CGPA to find records greater than it: ";
			cin >> enteredCgpa;
			displayRecordsWithCgpaMoreThanX(rollNo, cgpa, recordCount, enteredCgpa);
			break;
		}
		case 5:
		{
			cout << "\n Enter the CGPA to find records less than it: ";
			cin >> enteredCgpa;
			displayRecordsWithCgpaLessThanX(rollNo, cgpa, recordCount, enteredCgpa);
			break;
		}
		case 6:
		{
			displayAverageCgpa(cgpa, recordCount);
			break;
		}
		case 7:
		{
			cout << "\n Enter Roll No to Remove Record : ";
			cin >> enteredRollNo;
			int status = removeStudentRecord(rollNo, cgpa, &recordCount, enteredRollNo);
			if (status == true)
			{
				cout << "\n\t\t\t\t  *** Record Successfully Removed *** ";

			}
			else
			{
				cout << "\n\t\t\t\t\t *** Record not Found *** ";

			}
			break;
		}
		case 8:
		{
			cout << "\n Enter Roll No : ";
			cin >> enteredRollNo;
			cout << "\n Enter the CGPA to update the records: ";
			cin >> enteredCgpa;
			bool status = updateCgpa(rollNo, recordCount, enteredRollNo, cgpa, enteredCgpa);
			if (status)
			{
				cout << "\t\t\t\t\t  *** Record updated Successfully ***";
			}
			else
			{
				cout << "\t\t\t\t\t  *** No Record Found ***";
			}
			break;
		}
		case 0:
		{
			appRunFlag = false;
			break;
		}
		default:
		{
			cout << "\n\t\t\t\t\t  ***Enter a valid option***";
		}
		}
	} while (appRunFlag); // To ask again for input...
}

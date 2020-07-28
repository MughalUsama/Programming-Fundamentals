
#include<iostream>
#include <iomanip>
#include <fstream>
#include"StudentDataBaseOperations.h"

using namespace std;

//       FUNCTION DEFINITIONS:      

// 1- definition of add student record.
int addStudentRecord(int rollNo[], float cgpa[], int size, int enteredRollNo, float enteredCgpa)
{
	

	int recordIndex = findStudentRollNo(rollNo, enteredRollNo);
	if (recordIndex != -1) //duplicateRecord
	{
		return 0;
	}
	fstream dataFile;
	dataFile.open("Record.txt", ios::out | ios::app);
	dataFile << enteredRollNo<<"  ";
	dataFile << enteredCgpa<<"\n";
	dataFile.close();
	return 1;
}

// 2- definition of findRollNo
/*int findStudentRollNo(int rollNo[], int enteredRollNo)
{
	int i = 0;
	while (i < recordCount && rollNo[i] != enteredRollNo) //finding records
	{
		i = i + 1;
	}

	if (recordCount == i) // checking if index has increased and record not found
	{
		return -1;
	}
	else
	{
		return i; //returning index
	}
}
*/
// 3- definition of displayAllRecords
void displayAllRecords(int rollNo[], float cgpa[], int recordCount)
{

	bool recordFound = (!isEmpty(recordCount));
	if (1)
	{
		cout << "\n\t\t\t\t\t Roll No      CGPA";
		cout << "\n\t\t\t\t\t -------     ------";
		cout.fill(' ');
		fstream dataFile;
		dataFile.open("Record.txt", ios::in);
		float rollNo;
		while (dataFile >> rollNo)
		{
			float cgpa;
			dataFile >>cgpa;
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNo << setw(11) << "    " << right << cgpa;
		}
		dataFile.close();
	}
	else
	{
		cout << "\n\t\t\t\t\t  *** No record Found ***";
	}
}

// 4- definition of void displayRecordsWithCgpaMoreThanX
void displayRecordsWithCgpaMoreThanX(int rollNo[], float cgpa[], int recordCount, float enteredCgpa)
{
	
	cout << "\n\t\t\t\t\t Roll No       CGPA>=" << enteredCgpa;
	cout << "\n\t\t\t\t\t -------      ---------";
	
	cout.fill(' ');
	fstream dataFile;
	dataFile.open("Record.txt", ios::in);
	float rollNum;
	while (dataFile >> rollNum)
	{
		float cgpa;
		dataFile >> cgpa;
		if (cgpa>=enteredCgpa)
		{
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNum << setw(15) << right<<cgpa;
		}
	}
	dataFile.close();
	cout << "\n\n\t\t\t\t\t\tEnd of records.";
	


}

// 5- definition of void displayRecordsWithCgpaLessThanX
void displayRecordsWithCgpaLessThanX(int rollNo[], float cgpa[], int recordCount, float enteredCgpa)
{
	int recordsFound = 0;
	cout << "\n\t\t\t\t\t Roll No       CGPA<=" << enteredCgpa;
	cout << "\n\t\t\t\t\t -------      --------";
	cout.fill(' ');
	fstream dataFile;
	dataFile.open("Record.txt", ios::in);
	float rollNum;
	while (dataFile >> rollNum)
	{
		float cgpa;
		dataFile >> cgpa;
		if (cgpa<=enteredCgpa)
		{
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNum << setw(15) << right << cgpa;
		}
	}
	dataFile.close();
	cout << "\n\n\t\t\t\t\t\tEnd of records.";


}

// 6- definition of displayAverageCgpa
void displayAverageCgpa(float cgpa[], int recordCount)
{
	recordCount = 0;
	float totalCgpa = 0;
	fstream dataFile;
	dataFile.open("Record.txt", ios::in);
	float cGPA;
	while (dataFile >> cGPA)
	{
		dataFile >> cGPA;
		totalCgpa = totalCgpa + cGPA;
		recordCount = recordCount + 1;
	}
	dataFile.close();
	cout << "\t\t\t\t\t\t Total Records : " << recordCount;
	cout << "\n\t\t\t\t\t\t*Average CGPA is " << totalCgpa / recordCount<<"*";

}


// 7- definition of removeStudentRecord
bool removeStudentRecord(int rollNo[], float cgpa[], int *recordCount, int enteredRollNo)
{
	int index = findStudentRollNo(rollNo, *recordCount, enteredRollNo);
	if (index == -1)
	{
		return false;
	}

	for (int i = index; i < *recordCount - 1; i = i + 1)
	{
		rollNo[i] = rollNo[i + 1];
		cgpa[i] = cgpa[i + 1];
	}
	*recordCount = *recordCount - 1;
	return true;
}


// 8- definition of updateCgpa
bool updateCgpa(int rollNo[], int recordCount, int enteredRollNo, float cgpa[], float enteredCgpa)
{
	int index = findStudentRollNo(rollNo, recordCount, enteredRollNo);
	if (index == -1)
	{
		return false;
	}

	cgpa[index] = enteredCgpa;
	return true;
}

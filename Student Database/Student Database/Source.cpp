




//       FUNCTION DEFINITIONS:      

// 1- definition of add student record.
int addStudentRecord(int rollNo[], float cgpa[], int *recordCount, int size, int enteredRollNo, float enteredCgpa)
{
	if (isFull(*recordCount, size))
	{
		return 2;
	}
	
	int recordIndex = findStudentRollNo(rollNo, *recordCount, enteredRollNo);
	if (recordIndex!=-1) //duplicateRecord
	{
		return 0;
	}
	rollNo[*recordCount] = enteredRollNo;
	cgpa[*recordCount] = enteredCgpa;
	*recordCount = *recordCount + 1;
	return 1;
}

// 2- definition of findRollNo
int findStudentRollNo(int rollNo[], int recordCount, int enteredRollNo)
{
	int i = 0;
	while (i < recordCount && rollNo[i] != enteredRollNo) //finding records
	{
		i = i + 1;
	}

	if (recordCount==i) // checking if index has increased and record not found
	{
		return -1;
	}
	else
	{
		return i; //returning index
	}
}

// 3- definition of displayAllRecords
void displayAllRecords(int rollNo[], float cgpa[], int recordCount)
{

	bool recordFound = (!isEmpty(recordCount));
	if (recordFound)
	{
		cout << "\n\t\t\t\t\t Roll No      CGPA";
		cout << "\n\t\t\t\t\t -------     ------";
		cout.fill(' ');

		for (int i = 0; i < recordCount; i = i + 1)
		{
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNo[i] << setw(11) << right << cgpa[i];
		}
	}
	else
	{
		cout << "\n\t\t\t\t\t  *** No record Found ***";
	}
}

// 4- definition of void displayRecordsWithCgpaMoreThanX
void displayRecordsWithCgpaMoreThanX(int rollNo[], float cgpa[], int recordCount, float enteredCgpa)
{
	int recordsFound = 0;
	cout << "\n\t\t\t\t\t Roll No       CGPA<=" << enteredCgpa;
	cout << "\n\t\t\t\t\t -------      ---------";
	for (int i = 0; i < recordCount; i = i + 1)
	{

		cout.fill(' ');
		if (cgpa[i] >= enteredCgpa)
		{
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNo[i] << setw(15) << right << cgpa[i];
			recordsFound = recordsFound + 1;
		}
		
	}
	if (recordsFound == 0 || recordCount == 0)
	{
		cout << "\n\t\t\t\t\t    *** No record Found ***";
	}

}

// 5- definition of void displayRecordsWithCgpaLessThanX
void displayRecordsWithCgpaLessThanX(int rollNo[], float cgpa[], int recordCount, float enteredCgpa)
{
	int recordsFound = 0;
	cout << "\n\t\t\t\t\t Roll No       CGPA>=" << enteredCgpa;
	cout << "\n\t\t\t\t\t -------      --------";
	cout.fill(' ');
	for (int i = 0; i < recordCount; i = i + 1)
	{
		if (cgpa[i] <= enteredCgpa)
		{
			cout << "\n\t\t\t\t\t" << setw(8) << right << rollNo[i] << setw(15) << right << cgpa[i];
			recordsFound = recordsFound + 1;
		}
	}
		if (recordsFound == 0 || recordCount == 0)
	{
		cout << "\n\t\t\t\t\t   *** No record Found ***";
	}

}

// 6- definition of displayAverageCgpa
void displayAverageCgpa(float cgpa[], int recordCount)
{
	float totalCgpa = 0;
	for (int i = 0; i < recordCount; i = i + 1)
	{
		totalCgpa = totalCgpa + cgpa[i];
	}
	if (recordCount==0)
	{
		cout << "\n\t\t\t\t\t   *** No record Found ***";
	}
	else
	{
		cout << "\n\t\t\t\t\t Average CGPA is : " << (totalCgpa / recordCount);
	}
	


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


// definition of isFull
bool isFull(int recordCount, int size)
{
	return (recordCount == size);
}

// definition of isEmpty
bool isEmpty(int recordCount)
{
	return (recordCount == 0);
}


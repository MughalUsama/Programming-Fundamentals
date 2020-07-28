//Prototypes

#ifndef Student_DataBase_Operations_h
#define Student_DataBase_Operations_h

int addStudentRecord(int[], float[], int *, int, int, float);
int findStudentRollNo(int[], int, int);
bool isFull(int, int);
bool isEmpty(int);
bool removeStudentRecord(int[], float[], int *, int);
void displayAllRecords(int[], float[], int);
void studentDatabase();
void displayRecordsWithCgpaLessThanX(int[], float[], int, float);
void displayRecordsWithCgpaMoreThanX(int[], float[], int, float);
bool updateCgpa(int[], int, int, float[], float);
void displayAverageCgpa(float[], int);

#endif // !Student_DataBase_Operations_h


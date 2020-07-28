#ifndef QUOTATIONS_DATABASE_H
#define QUOTATIONS_DATABASE_H

void createQuotationsDatabase(char * * & , char * * & , int );
void addQuotation(char * * & , char * * & , int & , int & , char * , char * );
bool isStringSame(char * , char * );
void displayAuthorWise(char *, char * * & , char * * & , int & );
bool isFull(int nOE, int capacity);
void deallocateArray(char ** &, int &);
int getLength(char * );
char ** resizeArray(char * * & , int & , int);



#endif // !QUOTATIONS_DATABASE_H

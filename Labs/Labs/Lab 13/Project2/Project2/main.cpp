#include <iostream>
#include "QoutationDatabase.h"
using namespace std;

int main()
{
	char ** quoteList;
	char ** authorList;
	int numOfQuotations = 0;
	int capacity = 4;

	char quote[25] = "Quotation 1...";
	char author[25] = "Author A";
	char quote1[25] = "Quotation 2.";
	char author1[25] = "Author B";
	char quote2[25] = "Quotation 3.";
	char author2[25] = "Author B";
	char quote3[25] = "Quotation 4.";
	char author3[25] = "Author C";
	char quote4[25] = "Quotation 5.";
	char author4[25] = "Author B";
	char quote5[25] = "Quotation 6.";
	char author5[25] = "Author A";
	char quote6[25] = "Quotation 7.";
	char author6[25] = "Author C";
	//creating database
	createQuotationsDatabase(quoteList, authorList, capacity);
	// add quotation
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote, author);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote1, author1);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote2, author2);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote3, author3);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote4, author4);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote5, author5);
	addQuotation(quoteList, authorList, numOfQuotations, capacity, quote6, author6);
	//display
	displayAuthorWise(author, quoteList, authorList, numOfQuotations);
	displayAuthorWise(author3, quoteList, authorList, numOfQuotations);

	cout << "\n";
	system("pause");
	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	double loanAmount,annualInterestRate, monthlyInterestRate, amountPaid, interestPaid, monthlyPayment, numerator, denominator;
	double noOfPayments;
	cout << "Enter the loan amount:  ";
	cin >> loanAmount;
	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;
	cout << "Enter the no of payments: ";
	cin >> noOfPayments;
	monthlyInterestRate = annualInterestRate / 12.0;
	numerator = (monthlyInterestRate * (pow(1 + monthlyInterestRate, noOfPayments) * 1)*loanAmount);
	denominator=((pow(1 + monthlyInterestRate, noOfPayments)) - 1);
	monthlyPayment = numerator / denominator;
	amountPaid = monthlyPayment * noOfPayments;
	interestPaid = amountPaid - loanAmount;
	cout << "Loan Amount:\t" <<fixed<<setprecision(2)<<"$" << loanAmount << "\n";
	cout << "Monthly interest rate:\t" << monthlyInterestRate << "%" << "\n";
	cout << "Number of payments:\t" << noOfPayments << "\n";
	cout << "Monthly Payment:\t" << "$" << monthlyPayment << "\n";
	cout << "Amount Paid Back:\t" << "$" << amountPaid << "\n";
	cout << "Interest Paid:\t\t" << "$" << (interestPaid)<<"\n";
	cout << "\n";
	system("pause");
}
/*
Write a program in C++ to check whether the primitive values crossing the limits or not.
*/

#include<iostream>

using namespace std;

int main()
{
	cout << "check whether the primitive values crossing the limits or not. " << endl;
	cout << "------------------------------------------" << endl;
	char gender = 'M';
	bool isemp = true;
	unsigned short numofsons = 0;
	short yearofappt = 2022;
	unsigned int yearlypackage = 300000;
	double height = 56.99;
	float gpa = 6.98f;
	long totaldrawan = 150000l;
	long long balance = 150000l;

	cout << "The Gender is: " << gender << endl;
	cout << "Is he married: " << isemp << endl;
	cout << "Number of sons he has: " << numofsons << endl;
	cout << "Year of appointment: " << yearofappt << endl;
	cout << "Salary for a year: " << yearlypackage << endl;
	cout << "Height: " << height << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Salary drawn up to: " << totaldrawan << endl;
	cout << "Balance till: " << balance << endl;
	return 0;
}
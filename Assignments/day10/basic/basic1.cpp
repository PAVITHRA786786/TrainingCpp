/*
Calculate Compound Interest
Given principal P, rate R, and time T, find Compound Interest.
Formula: A = P * (1 + R/100)^T, CI = A - P
Use only basic operators.


*/

#include <iostream>
#include <cmath> 
using namespace std;

int main()
	{
	int P, T;
	float R, A, CI;
	cout << "Enter Principal: ";
	cin >> P;
	cout << "Enter Rate: ";
	cin >> R;
	cout << "Enter Time: ";
	cin >> T;
	A = P * pow((1 + R / 100), T);
	CI = A - P;
	cout << "Compound Interest: " << CI << endl;
	cout << "Total Amount: " << A << endl;
	return 0;

	}

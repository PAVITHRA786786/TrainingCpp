/*
Check Voting Eligibility
Input age. If >= 18, print "Eligible"; else, "Not Eligible".
*/

#include <iostream>
using namespace std;


int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age >= 18)
	{
		cout << "Eligible to vote." << endl;
	}
	else
	{
		cout << "Not eligible to vote." << endl;
	}

	return 0;
}
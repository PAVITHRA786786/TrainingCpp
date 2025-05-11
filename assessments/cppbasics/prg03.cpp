/*
C++ Program To Check Whether Number is Even Or Odd
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << n << " is a Even Number " << endl;
	}
	else
	{
		cout << n << " is a Odd Number " << endl;
	}
	return 0;
}
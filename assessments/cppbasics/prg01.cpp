/*
Write a C++ Program to Check Whether a Number is a Positive or Negative Number
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if (n >= 0)
	{
		cout << n << " is a Positive Number " << endl;
	}
	else
	{
		cout << n << " is a Negative Number " << endl;
	}
	

	return 0;
}
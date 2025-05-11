/*
Write a Program to Find the Greatest of the Three Numbers
*/

#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << a << " is Greatest Number " << endl;
	}
	
	else if (b > c)
	{
		cout << b << " is Greatest Number " << endl;
	 }
	else
	{
		cout << c << " is Greatest Number " << endl;
	}
	return 0;
}
/*
Check if Three Angles can Form a Triangle
Problem:
Check if three given angles form a valid triangle.

Hint:
If sum of three angles == 180 degrees, return true.
*/

#include<iostream>
using namespace std;
bool isTriangle(int, int, int);
int main()
{
	int angle1, angle2, angle3;
	cout << "Enter three angles:" << endl;
	cin >> angle1 >> angle2 >> angle3;
	bool result = isTriangle(angle1, angle2, angle3);
	if (result)
	{
		cout << "The angles can form a triangle." << endl;
	}
	else
	{
		cout << "The angles cannot form a triangle." << endl;
	}
	return 0;
}
bool isTriangle(int a, int b, int c)
{
	int sum = a + b + c;
	return (sum == 180);
}
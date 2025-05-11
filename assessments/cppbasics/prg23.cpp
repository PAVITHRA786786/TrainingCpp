/*
Write a Program to Find the Second Smallest Element in an Array
*/

#include<iostream>
using namespace std;

int main()
{
	//int a[] = { 3,-20,30,5,3 };
	//int n = sizeof(a) / sizeof(a[0]);
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int f = INT_MAX, s = INT_MAX;

	for (int i = 0;i < n;i++)
	{
		if (a[i] < f)
		{
			s = f;
			f = a[i];
		}

		else if ((a[i] < s) && (a[i] != f))
			s = a[i];
	}

	cout << "Second Lowest: " << s << endl;
}

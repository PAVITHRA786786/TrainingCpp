/*
Write a Program to Find the Smallest and Largest Element in an Array
*/


#include<iostream>
#define CAP 100
using namespace std;

int main()
{
	//int arr[CAP] = { 0,10,20,30,40 };
	//int n = sizeof(arr) / sizeof(arr[0]);
	int arr[100], n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int i,  min = arr[0], max = arr[0];
	for (i = 0;i < n;i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}

	}
	cout << "min=" << min << endl;
	cout << "max=" << max << endl;

	return 0;
}
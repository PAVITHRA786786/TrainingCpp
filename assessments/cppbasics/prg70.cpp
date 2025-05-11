/*
You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.

Input:

7
3 3 4 4 5 5 7
Output:

7

*/

#include<iostream>
#define CAP 10
using namespace std;

int unique(int arr[], int n);
int main()
{
	int i, n;
	int arr[CAP];
	
	cin >> n;
	
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}

	int result = unique(arr, n);
	cout << result << endl;

	return 0;
}

int unique(int arr[], int n)
{
	int ret;
	int i;
	for (i = 0;i < n;i++)
	{
		if (arr[i] != arr[i + 1])
		{
			ret = arr[i];
		}
		else
			i++;
	}
	return ret;
}
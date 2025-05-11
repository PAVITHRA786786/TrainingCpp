/*
Write a Program to Calculate the Sum of Elements in an Array
*/


#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int arr[100], n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "The Sum of Elements in an Array: " << sum << endl;

	
	return 0;

}
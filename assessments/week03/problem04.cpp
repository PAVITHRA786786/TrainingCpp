/*
You are given an array A of N positive or negative integers. Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing). If no such index exists, return -1.

?? Constraints
1 ? N ? 100
-1000 ? A[i] ? 1000
?? Input Format
The first line contains an integer N — the size of the array.
The second line contains N space-separated integers — the elements of the array.
??? Output Format
Print a single integer — the index of the first equilibrium position, or -1 if it does not exist.
?? Test Cases
? Test Case 1
Input:

7
-7 1 5 2 -4 3 0
Output:

3

*/


#include<iostream>
#define CAP 10
using namespace std;

void display(int arr[], int n);
int main()
{
	int i, n;
	int arr[CAP];
	cout << "Enter the size of the array:" << endl;
	cin >> n;
	cout << "Enter the elements of the array: " << endl;
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	display(arr, n);
	return 0;

}

void display(int arr[], int n)
{
	int tot = 0;
	int i;
	for (i = 0;i < n;i++)
	{
		tot += arr[i];
	}
	int lsum = 0;
	int rsum = 0;
	for (i = 0;i < n;i++)
	{
		rsum = tot - arr[i] - lsum;
		if (lsum == rsum)
		{
			cout << i << endl;
			break;
		}
		else
		{
			lsum += arr[i];
		}

	}
	if (i == n)
	{
		cout << -1 << endl;
	}
}

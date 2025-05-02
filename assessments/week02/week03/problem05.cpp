/*
You are given an array A of positive integers. Your task is to find and print all the leaders in the array.

An element is considered a leader if it is greater than all elements to its right. The rightmost element is always considered a leader.

Return the list of leaders in the same order as they appear from right to left in the original array.

?? Constraints
1 ? N ? 100
1 ? A[i] ? 1000 (where A[i] is the ith element of the array)
?? Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
??? Output Format
Print the leader elements of the array from **right to left** as they appear.
?? Test Cases
? Test Case 1
Input:

6
6 7 4 3 5 2
Output:

2 5 7
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
	cout << "Enter the elements of the array:" << endl;
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	display(arr, n);
	return 0;
}
void display(int arr[], int n)
{
	int i;
	int lead = arr[n - 1];
	cout << lead << " ";
	for (i = n - 2;i >= 0;i--)
	{
		if (arr[i] > lead)
		{
			lead = arr[i];
			cout << lead << " ";
		}
		else
		{
			continue;
		}
	}
	cout << endl;
}
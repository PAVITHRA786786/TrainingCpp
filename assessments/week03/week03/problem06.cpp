/*

You are given an array arr[] of size N containing positive integers. Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.

?? Constraints
1 ? N ? 100
1 ? arr[i] ? 1000 (for each element in the array)
1 ? K ? N
?? Input Format
The first line contains an integer N – the size of the array.
The second line contains N space-separated integers.
The third line contains an integer K – the group size for reversal.
??? Output Format
Print the array after reversing every group of K consecutive elements.
?? Test Cases
? Test Case 1
Input:

6
1 2 3 4 5 6
3
Output:

3 2 1 6 5 4

*/


#include<iostream>
#define CAP 100
using namespace std;

void display(int arr[], int n);

int main()
{
	int n, i;
	int arr[CAP];
	cout << "Enter the size of the elements:" << endl;
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
	int i, k;
	cin >> k;
	for (i = 0; i < n; i += k)
	{
		int left = i;
		int right = min(i + k - 1, n - 1 );
		while (left < right)
		{
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
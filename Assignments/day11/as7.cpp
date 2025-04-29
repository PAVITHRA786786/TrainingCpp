/*
Given an array of positive integers.
Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side.
And the rightmost element is always a leader.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements of the array.

Constraints
 1<= n<=100-1000<=arr[i]<= 1000, where arr is the ith  element of the array.
 Output Format:
 The output line prints all the leaders in the array.

TESTCASE 1:
 Input:
 6
 6 7 4 3 5 2
 Output:
 2 5 7

TESTCASE 2:
 Input:
 5
 2 6 3 8 4
 Output:
 4 8
*/

#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif

#include <iostream>
using namespace std;


int main()
{
		int n;
	cout << "Enter the size of the array:" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_from_right = arr[n - 1];
	cout << "Leaders in the array are: " << max_from_right << " ";

	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] > max_from_right) {
			max_from_right = arr[i];
			cout << max_from_right << " ";
		}
	}

	return 0;
}
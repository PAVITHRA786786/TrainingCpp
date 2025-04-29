/*
Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found

*/


#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "enter a number" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array:" << endl;
	cin>> arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum;
	cin >> sum;

	int start = 0, end = 0, current_sum = 0;

	while (end < n) {
		current_sum += arr[end];

		while (current_sum > sum && start <= end) {
			current_sum -= arr[start];
			start++;
		}

		if (current_sum == sum) {
			cout << "Sum found between indexes " << start << " and " << end << endl;
			return 0;
		}
		end++;
	}

	cout << "No subarray found" << endl;
	return 0;
}
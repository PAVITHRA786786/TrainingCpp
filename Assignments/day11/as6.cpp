/*
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]

o/p
3

I/p
5
[0 0 0 0 -1]

o/p
4
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the size of the array:" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left_sum = 0, right_sum = 0;

	
	for (int i = 0; i < n; i++) {
		right_sum += arr[i];
	}

	
	for (int i = 0; i < n; i++) {
		right_sum -= arr[i]; 

		if (left_sum == right_sum) {
			cout << "Equilibrium index found at: " << i << endl;
			return 0;
		}

		left_sum += arr[i]; 
	}

	cout << "No equilibrium index found" << endl;
	return 0;
}
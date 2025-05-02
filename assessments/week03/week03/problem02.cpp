/*
You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.

📌 Constraints
The array is sorted in non-decreasing order.
1 ≤ N ≤ 10^5 (N is always odd)
if possible try to solve considering bellow 2 conditions
Time Complexity: O(N)
Do not use extra memory (i.e., no additional data structures like hash maps, sets, or arrays)
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print the unique element that appears only once.
🧪 Sample Test Case
Input:

7
3 3 4 4 5 5 7
Output:

7

*/

#include<iostream>
#define CAP 100
using namespace std;

int unique(int arr[], int n);
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
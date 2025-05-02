/*
You are given an array A of size N containing positive integers. For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.

📌 Constraints
2 ≤ N ≤ 100
All elements in the array are positive integers.
🧾 Input Format
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
🖨️ Output Format
Print N space-separated integers — each representing the count of smaller elements to the right of the corresponding element in the array.
🧪 Sample Test Cases
✅ Test Case 1
Input:

5
5 4 3 2 1
Output:

4 3 2 1 0
*/

#include<iostream>
#define CAP 10
using namespace std;

void display(int arr[],int n);

int main()
{
	int n, i;
	int arr[CAP];
	cout << "Enter the size of the elements:" << endl;
	cin >> n;
	cout << "Enter the elements of the array:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	display(arr,n);
	    return 0;
}


void display(int arr[],int n)
{
	int i, j;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				count++;
			}
		}
		cout << count << " ";
	}
	cout << endl;
}

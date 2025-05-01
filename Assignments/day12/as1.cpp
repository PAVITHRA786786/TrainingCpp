/*

Magic Square Verification:
Given an N x N matrix, determine if it is a magic square, meaning:
The sum of each row, column, and both diagonals is the same.
No duplicate numbers exist.
Here are some test cases for the Magic Square Verification problem:

Test Case 1: Valid Magic Square
Input:

3 3
8 1 6
3 5 7
4 9 2
Expected Output:

It is a Magic Square!
Explanation:
All rows, columns, and diagonals sum to 15.


*/

#include <iostream>

using namespace std;

bool isMagicSquare(int matrix[10][10], int n);

int main() {
	int n;
	cout << "Enter the size of the matrix (N): ";
	cin >> n;

	int matrix[10][10];
	cout << "Enter the elements of the matrix:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	if (isMagicSquare(matrix, n)) {
		cout << "It is a Magic Square!" << endl;
	}
	else {
		cout << "It is not a Magic Square." << endl;
	}

	return 0;
}

bool isMagicSquare(int matrix[10][10], int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += matrix[0][i];
	}

	for (int i = 1; i < n; i++) {
		int rowSum = 0;
		for (int j = 0; j < n; j++) {
			rowSum += matrix[i][j];
		}
		if (rowSum != sum) {
			return false;
		}
	}

	for (int i = 0; i < n; i++) {
		int colSum = 0;
		for (int j = 0; j < n; j++) {
			colSum += matrix[j][i];
		}
		if (colSum != sum) {
			return false;
		}
	}
}
/*

Description:  God Number
Problem Statement: God Number

You are given a string s of length n only containing digits from 0-9. Find the God Number for the given string. God Number for a string is said to be the absolute difference between the maximum and minimum definite value of characters.

The Definite Value of a character is an integer that is represented by the multiplication of its character value and its frequency.

If a string contains only a single type of character, then return that character's definite value as the answer.

Input Format

The one and only line contain a string s.
Constraints

1<=|s|<=105
Output Format

Return the God Number as asked in the problem statement.
Sample Input

1234567897653322
Sample Output

13
Explanation

Here, the maximum definite value will be of 7 which is equal to 14 and the minimum will be of 1 which is 1.

So the difference is 13.

*/

#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int godNumber(const string& s) {
	vector<int> freq(10, 0);

	for (char c : s) {
		freq[c - '0']++;

	}

	int maxv = 0;
	int minv = INT_MAX;


	for (int i = 0; i < 10; ++i) {
		if (freq[i] > 0) {
			int val = i * freq[i];
			maxv = max(maxv, val);
			minv = min(minv, val);
		}
	}

	return maxv - minv;
}

int main() {
	string s;
	s = "1234567897653322";
	int result = godNumber(s);
	cout << result << endl;



	return 0;
}



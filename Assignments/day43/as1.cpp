/*
1)	 Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

For the input array [4, 5, 2, 25, 7,8}, the next greater elements for each element are as follows.

Element --> NGE
output:

4 --> 5

5 --> 25

2 --> 25

25 --> -1
7 --> 8
8 --> -1
*/


#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

void printNGE(vector<int>& arr) {
	stack<int> s;
	vector<int> num(arr.size(), -1); 

	for (int i = 0; i < arr.size(); i++) {
		while (!s.empty() && arr[s.top()] < arr[i]) {
			num[s.top()] = arr[i]; 
			s.pop();
		}
		s.push(i); 
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " -> " << num[i] << endl;
	}
}


int main()
{
	vector<int> arr = { 4, 5, 2, 25, 7,8 };
	printNGE(arr);
	return 0;
}











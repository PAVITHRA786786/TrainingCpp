/*
Problem 3: Find nth Fibonacci Number
Problem Statement:
Write a recursive function to return the nth Fibonacci number.
(Fibonacci series: 0, 1, 1, 2, 3, 5, 8, ...)
*/

#include<iostream>
using namespace std;
int fibonacci(int);

int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	int result = fibonacci(n);
	cout<<result<<endl;
	return 0;
}
int fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
   cout << endl;
    return 0;
}
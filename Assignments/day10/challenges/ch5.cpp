/*
Stairway of Squares
Hint:

Each step involves summing the square of all previous steps.
Recursion Base Case: If n == 0, return 0 (no more steps).
Logic: For each step, return the square of n and add the sum of squares for the previous steps (n-1).
Example:
For n = 3, the sum of squares would be:

3^2 + 2^2 + 1^2 = 9 + 4 + 1 = 14
*/


#include <iostream>
using namespace std;


int main()
{
	int n,i;
	cout << "Enter the number of steps: ";
	cin >> n;
	
	int sum = 0;
	for ( i = 1; i <= n; i++) {
		sum += i * i;
	}
	cout << "Sum of squares: " <<sum << endl;
	return 0;
}
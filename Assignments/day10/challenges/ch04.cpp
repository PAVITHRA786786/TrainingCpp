/*
Summoning the Dragon
Hint:

Use a loop to iterate through numbers from 1 to n.
For each number, check if it's divisible by 3. If it is, skip that number.
Logic: If not divisible by 3, print the number.
Example:
For n = 10, the program should print:

1 2 4 5 7 8 10
Numbers divisible by 3 (3, 6, 9) are skipped.


*/



#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of floors: ";
	cin >> n;
	
	cout << "Summoning the Dragon: ";
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue;
		}
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
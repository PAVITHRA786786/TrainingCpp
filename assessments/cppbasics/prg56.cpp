/*
Check if a Number is Divisible by Both 3 and 5

*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cin >> num;

	if (num % 3 == 0 && num % 5 == 0)
	{
		cout << num << " is divisible by both 3 and 5." << endl;
	}
	else
	{
		cout << num << " is not divisible by both 3 and 5." << endl;
	}

	return 0;
}
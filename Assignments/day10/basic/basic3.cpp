/*
Check if a Number is Divisible by Both 3 and 5
Take an integer and check if divisible by 3 and 5 using logical operators (&&).
*/

#include <iostream>
using namespace std;

int main()
{
		int num;
	cout << "Enter an integer: ";
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
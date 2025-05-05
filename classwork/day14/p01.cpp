/*
nested if
*/



#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b)
	{
		cout << "a is greatest" << endl;
	}
	else
		if (a > c)
		{
			cout << a << " is greatest" << endl;
		}
		else {
			cout << c << " is greatest" << endl;
		}

	
	

		if (b > c)
		{
			cout << b << " is greatest" << endl;
		}
	
	return 0;
}
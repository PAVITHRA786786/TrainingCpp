#include<iostream>

using namespace std;

void estimate(int);
int main()
{
	
	estimate(0);

	return 0;
	}

void estimate(int n)
{
	cin >> n;
	if (n == 0)
	{
		cout << "Estimated time is 0 minutes" << endl;
	}
	else if (n > 0 && n <= 2000)
	{
		cout << "Estimated time is 25 minutes" << endl;
	}
	else if (n > 2000 && n <= 4000)
	{
		cout << "Estimated time is 35 minutes" << endl;
	}
	else if (n > 4000 && n <= 7000)
	{
		cout << "Estimated time is 45 minutes" << endl;
	}
	else if (n > 7000)
	{
		cout << "OVERLOADED" << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}
}
	
#include<iostream>

using namespace std;

void jar(int);

int main()
{
	jar(0);
	
	return 0;

}

void jar(int n)
{
	int a = 10, k = 5, sum = 0;
	cin >> n;
	if (n > 0)
	{
		sum = a - n;

		if (sum < 5)
		{
			cout << "jar can not contain less than 5 candies" << endl;
		}
		else
		{
			cout << "Number of candies left: " << sum << endl;
		}
	}
	else
	{
		cout << "Invalid input" << endl;
		cout << "Number of candies left: " << a << endl;
	}
	
}
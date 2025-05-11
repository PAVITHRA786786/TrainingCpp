/*
Categorize Temperature into Hot, Warm, Cold
Input temperature:

35 ? Hot

20–35 ? Warm
<20 ? Cold
Use if-else ladder.
*/

#include <iostream>
using namespace std;

int main()
{
	int temp;
	cin >> temp;

	if (temp > 35)
	{
		cout << "Hot" << endl;
	}
	else if (temp >= 20 && temp <= 35)
	{
		cout << "Warm" << endl;
	}
	else
	{
		cout << "Cold" << endl;
	}

	return 0;
}
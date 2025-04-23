#include<iostream>
#define MAX 5
using namespace std;

int main()
{
	int rate = 0;
	int purchase = MAX;
	do {
		cout << "Welcome to store " << endl;
		cout << "purchase made:" << endl;
		purchase--;
		cout << "rate the product:" << endl;
		cin >> rate;
	} while ((rate > 0) && (purchase > 0));
	if (rate == 0)
	{
		cout << "Thank you for rating a product" << endl;
		cout << "Visit again" << endl;
	}
	else
	{
		cout << "please rate the product" << endl;
	}
}
/*
Write a Program for Octal to Decimal Conversion
*/


#include<iostream>
#include<math.h>

using namespace std;

int oct2dec(int, int);

int main()
{
	int num, base=10;
	cin >> num;
	int res = oct2dec(num, base);
	cout << "octal to decimal conversion : " << res << endl;

	return 0;
}

int oct2dec(int n, int base)
{

	int place = 0;
	int decimal = 0;


	while (n != 0)
	{
		int last_digit = n % base;
		decimal = decimal + last_digit * pow(8, place);
		n = n / base;
		place++;
	}
	return decimal;
}
/*
Write a Program for Decimal to Binary Conversion
*/

#include<iostream>
#include<math.h>

using namespace std;

int dec2bin(int, int);

int main()
{
	int num, base = 2;
	cin >> num;
	int res = dec2bin(num, base);
	cout << "decimal to binary conversion : " << res << endl;

	return 0;
}

int  dec2bin(int n, int base)
{

	int binary = 0;
	int place = 1;
	while (n != 0)
	{
		int last_digit = n % base;
		binary = binary + last_digit * place;
		n = n / base;
		place = place * 10;
	}
	return binary;
}

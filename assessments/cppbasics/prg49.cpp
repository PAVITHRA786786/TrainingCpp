/*
Write a Program for Decimal Octal Conversion
*/

#include<iostream>
#include<math.h>

using namespace std;

int dec2oct(int, int);

int main()
{
	int num, base = 8;
	cin >> num;
	int res = dec2oct(num, base);
	cout << "decimal to binary conversion : " << res << endl;

	return 0;
}

int  dec2oct(int n, int base)
{

	int octal = 0;
	int place = 1;
	while (n != 0)
	{
		int last_digit = n % base;
		octal = octal + last_digit * place;
		n = n / base;
		place = place * 10;
	}
	return octal;
}

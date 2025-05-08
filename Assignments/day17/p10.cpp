/*
octal to decimal,decimal to octal,binary to decimal,decimal to binary
*/

#include<iostream>
#include<math.h>

using namespace std;

void oct2dec(int);
void dec2oct(int);
void dec2bin(int);
void bin2dec(int);

int main()
{
	int n=0;
	cin >> n;
	oct2dec(n);
	dec2oct(n);
	dec2bin(n);
	bin2dec(n);
	return 0;
}

void oct2dec(int n)
{
	
	int place = 0;
	int decimal = 0;
	while (n != 0)
	{
		int last_digit = n % 10;
		decimal = decimal + last_digit * pow(8, place);
		n = n / 10;
		place++;
	}
	cout <<"octal to decimal conversion : "<< decimal << endl;
}
void dec2oct(int n)
{
	
	int octal = 0;
	int place = 1;
	while (n != 0)
	{
		int last_digit = n % 8;
		octal = octal + last_digit * place;
		n = n / 8;
		place = place * 10;
	}
	cout << "decimal to octal conversion :" << octal << endl;
}

void dec2bin(int n)
{
	
	int binary = 0;
	int place = 1;
	while (n != 0)
	{
		int last_digit = n % 2;
		binary = binary + last_digit * place;
		n = n / 2;
		place = place * 10;
	}
	cout << "decimal to binary conversion :" << binary << endl;
}

void bin2dec(int n)
{
	
	int decimal = 0;
	int place = 0;
	while (n != 0)
	{
		int last_digit = n % 10;
		decimal = decimal + last_digit * pow(2, place);
		n = n / 10;
		place++;
	}
	cout << "binary to decimal conversion :" << decimal << endl;
}













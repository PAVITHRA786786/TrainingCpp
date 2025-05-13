/*
octal to decimal,decimal to octal,binary to decimal,decimal to binary
*/

#include<iostream>
#include<math.h>

using namespace std;

/*
dec2base:
user input:1st arg decimal value ,2nd arg to the base for convertion 
return:converted base value.
*/

int oct2dec(int,int);
int dec2oct(int,int);
int dec2bin(int,int);
int bin2dec(int,int);
int base1tobase2(int n, int b1, int b2);
int main()
{
	cout << "octal to decimal conversion : " << oct2dec(67,10)<< endl;
	cout << "decimal to octal conversion :" << dec2oct(55,8) << endl;
	cout << "decimal to binary conversion :" << dec2bin(55, 2) << endl;
	cout << "binary to decimal conversion :" << bin2dec(101,10) << endl;
	
	return 0;
}

int oct2dec(int n,int base)
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
int dec2oct(int n,int base)
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

int  dec2bin(int n,int base)
{

	int binary = 0;
	int place = 1;
	while (n != 0)
	{
		int last_digit = n % base;
		binary = binary + last_digit * pow(10,place);
		n = n / base;
		place++;
	}
	return binary;
}

int bin2dec(int n,int base)
{

	int decimal = 0;
	int place = 0;
	
	while (n != 0)
	{
		int last_digit = n % 10;
		decimal = decimal + last_digit * pow(base, place);
		n = n / base;
		place++;
	}
	return decimal;
}













/*
Write a Program for Hexadecimal to Decimal Conversion
*/

#include<iostream>
#include<math.h>

using namespace std;

int hexa2dec(char);

int main()
{
	char hex[20];
	int i=0, dec=0;

	cin>>hex;

	while (hex[i])
	{
		dec = dec*16 + hexa2dec(hex[i]);
		i++;
	}

	cout<<"Hexadecimal to Decimal Conversion : "<<dec<<endl;
	return 0;
}

int hexa2dec(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	else if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	else if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	else
		return 0;
}
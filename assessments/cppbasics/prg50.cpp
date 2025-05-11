/*
Write a Program for Decimal to Hexadecimal Conversion
*/

#include<iostream>

using namespace std;

int main()
{
	int num, temp, i = 1, j, r;
	char hexa[1024];
	memset(hexa, '\0', 1024);
	cin >> num;
	temp = num;
	while (temp != 0)
	{
		r = temp % 16;
		if (r < 10)
			hexa[i++] = r + 48;
		else
			hexa[i++] = r + 55;
		temp = temp / 16;
	}
	cout << "decimal to hexadecimal conversion : ";
	for (j = i;j > 0;j--)
		
		cout << hexa[j];
	cout << endl;
	return 0;
	
}
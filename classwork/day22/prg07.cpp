/*remove the consecutive characters from the string
i/p
fgabhij
fghij count=1
fgh count=2
*/


#include<iostream>

#include<cstdlib>

using namespace std;

int wap(char*, int);

int wap(char* str, int n)
{
	int i, j;
	char* temp = new char[n];
	for (i = 0; i < n; i++)
		temp[i] = str[i];
	j = 0;
	for (i = 0; i < n; i++)
	{
		if (temp[i] != temp[i + 1])
		{
			str[j] = temp[i];
			j++;
		}
	}
	//delete[] temp;
	str[j] = '\0';
	return j;
}

int main()
{
	char str[100];
	int n;
	cin >> str;
	n = strlen(str);
	n = wap(str, n);
	str[n] = '\0';
	cout << str << endl;
	return 0;
}
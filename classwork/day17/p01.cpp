/*
count the number of times an alphabet is present in a string

input:
apple

output:
a-1
p-2
l-1
e-1
*/


#include<iostream>
#include<string>
#define CAP 100
using namespace std;

int main()
{
	int freq[26] = {0,};
	char s[1024];
	cin >> s;
	for (int i = 0;i < 26;i++)
		freq[1] = 0;
	for (int i = 0;i < strlen(s);i++)
	{
		freq[s[i] - 'a']++;
		
	}
	for (int i = 0;i < 26;i++)
	{
		if (freq[i] > 0)
		{
			cout <<char(i+'a')<<"-"<< freq[i] << endl;
		}
	}
	/*char str[CAP];
	cin.getline(str, 99);
	int i, count = 0;
	for(i=0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		count = 0;
		for (int j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
			{
				count++;
				str[j] = ' ';
			}
		}
	
		
		if (count == -1)
		{
			continue;
		}
		if (count > 0)
		{
			cout << str[i] << "-" << count + 1 << endl;
		}
		else
		{
			cout << str[i] << "-" << 1 << endl;
		}
	}*/
	
	
	return 0;
}
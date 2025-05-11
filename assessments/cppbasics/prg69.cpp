/*
count the number of times an alphabet is present in a string
*/

#include<iostream>
#include<string>
#define CAP 100
using namespace std;

int main()
{
	int freq[26] = { 0, };
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
			cout << char(i + 'a') << "-" << freq[i] << endl;
		}
	}
	

	return 0;
}
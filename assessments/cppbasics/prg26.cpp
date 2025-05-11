/*
Write a Program to Check if Two Strings are Anagram or Not
*/


#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int freq[26] = { 0, };
	bool flag = true;
	char s1[1024] = { '\0', }, s2[1024] = { '\0', };
	cin >> s1 >> s2;

	for (int i = 0;i < 26;i++)
		freq[i] = 0;

	if (strlen(s1) == strlen(s2)) {
		for (int i = 0;i < strlen(s1);i++) {

			freq[s1[i] - 'a']++;
			freq[s2[i] - 'a']--;
		}
		for (int i = 0;i < 26;i++)
		{
			if (freq[i] > 0 || freq[i] < 0)
			{
				flag = false;
				break;
			}
		}
	}
	else
		flag = false;


	if (flag == true)
		cout << "Anagram" << endl;
	else
		cout << "Not Anagram" << endl;
	return 0;
}
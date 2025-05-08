/*
reverse the words in a string without using strings
*/

#include<iostream>
#include<cstring>
#define MAX 100
#define howManyNames 5
#define strlenName 50
using namespace std;
 
int lenstr(const char*);
char* revstr(char*, int);
char getwords(char*, char);

int main()
{
	char is[] = "Hello";
	int l = lenstr(is);
	char* rstr = revstr(is, l);
	cout << rstr << endl;
	cout << "length:" << l << endl;
	/*
	char names[howManyNames][strlenName];
	strcpy(names[0], "this");
	strcpy(names[1], "is");
	strcpy(names[2], "a");
	strcpy(names[3], "CPP");
	strcpy(names[4], "class");
	for (int i = 0;i < howManyNames; ++i)
	{
		cout << names[i];
		l=lenstr(names[i]);
		rstr = revstr(names[i], l);
		cout << rstr << endl;
	}
	for (int i = 0;i < howManyNames; ++i)
	{
		cout << names[i];
		if (i < howManyNames - 1)
		{
			cout << " ";

		}
		cout << endl;
	}
	char names1[howManyNames][strlenName] = { "welcome", "to", "visual", "studio", "coding" };
	for (int i = 0;i < howManyNames; i++)
	{
		cout << names1[i] << endl;
	}
	char str[howManyNames * strlenName];
	*/

	return 0;
}
  char getwords(char * c, char s)
//char getwords(char* s, char d)
{
	char words[100][MAX];
	char* result[100];
	int i = 0,j = 0,k = 0;
	while (i <= s)
	{
		if (c[i] != ' ' && c[i] != '\0')
		{
			words[j][k++] = c[i];
	
		}
		else
		{
			if (k > 0)
			{
				words[j][k] = '\0';
				revstr(words[i],lenstr(words[i]));
				result[j] = words[j];
				j++;
				k = 0;
			}
		}
		i++;
	}
	for (int x = 0;x < j;x++)
	{
		cout << result[x] << " ";
	}
	cout << endl;
	/*int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == d)
			return i;
		i++;
	}
	return -1;*/
}
int lenstr(const char* s)
{
	int c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return c;
}

char* revstr(char*s, int l)
{
	for (int i = 0;i < l / 2;i++)
	{
		char t = s[i];
		s[i] = s[l - i-1];
		s[l-i-1] = t;
	}
	return s;
}
/*
count the number the vowels in a string
*/


#include<iostream>
#include<string>
#define CAP 100

using namespace std;


int main()
{
	char s1[CAP];
	cin.getline(s1, CAP);
	int i,count = 0;
	for(i=0;s1[i]!='\0';i++)
	{
		if (s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'||
			s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
		{
			count++;
		}
	}
	cout << "number of vowels are: " << count << endl;

	return 0;

}
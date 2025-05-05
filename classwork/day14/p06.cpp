/*
string length without using strlen function
*/

#include<iostream>
#include<string>
#define CAP 100

using namespace std;

int main()
{
	char ch = '\0';
	char s1[CAP];
	cin >> s1;
	int count = 0;
	/*while (ch = s1[count] != '\0')
	{
		count++;
	}
	cout<<"string length:"<<count<<endl;
	*/
	while (ch = s1[count++] != '\0');
	cout <<"string length: " <<count-1 << endl;
	
	return 0;

}
/*
implement the length of a given string using function
*/


#include<iostream>
#include<cstring>
using namespace std;

void display(char[]);
int main()
{
	char name[20];
	cout << "Enter name:";
	cin >> name;
    display(name);
	return 0;
}

void display(char name[])
{
	int count = 0;
	for (int i = 0;name[i] != 0;i++)
	{
		count++;
	}
	cout<<"String length:"<<count<<endl;

}
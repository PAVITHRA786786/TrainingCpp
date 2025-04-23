#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
#include <stringhandling.h>

void stringhandling()
{
	char ch = 'A';
	char fName[20];//array of chars(size is fixed)
	string sName; //string (dynamically grows the size of the string)

	cout << "ch values" << ch << endl;
	cout << "enter First name: ";
    cin >> fName;
	cout << "enter Second name: ";
	cin >>sName;
	cout << "\n My Name is\n" << fName << " " << sName << endl;

	/*char Name[5]; //= "Hello";

	cout << sizeof(Name) << endl;
	//cout << "String length of Name is:" << strlen(Name) << endl;
	scanf("%s", Name);
	for (int i = 0;i < sizeof(Name);i++)
	{
		printf("\n %c=%d,Name[i],Name[i]");
	}*/
}

void enumhandling()
{
	//
	// enum Day {Monday=1000,Tuesday,Wednesday};
	enum Day{Monday,Tuesday,Wednesday=2000,Thursday,Friday,Saturday,Sunday};
	Day today = Thursday;
	cout << "value of today:" << today << endl;
}
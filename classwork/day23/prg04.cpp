/*
pass the array to the function
*/

#include<iostream>

using namespace std;

void display(char[]);

int main()
{
	char s[] = "bhima";
	display(s);
	return 0;
}

void display(char name[])
{
	while (*name != '\0')
		cout << *name++;
	cout << endl;
}

/*
void display(const char[]);

int main()
{
	char s[] = "bhima";
	//display(bhima)
	//display(s);

	return 0;
}

void display(const char name[])
{
	while (*name != '\0')
		cout << *name++;
		//change name
		//name[3]='H';//cannot be change.//read only memory
	cout << endl;
}


*/
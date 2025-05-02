#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char str1[] = "1011|Bhima shankar,8888";

	char delimit[] = "|";

	char* result = nullptr;


	result = strtok(str1, delimit);

	while (result != nullptr)
	{
		cout << result << endl;
		result = strtok(NULL, ",");
	}
	/*
	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;


	result = strtok(NULL, delimit);

	cout << result << endl;

	result = strtok(NULL, delimit);

	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;


	result = strtok(NULL, delimit);
	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;
	*/
	return 0;
}
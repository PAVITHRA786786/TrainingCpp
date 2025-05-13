
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char line[] = "This is cpp programming class";
	for (int i = 0;i < strlen(line);i++)
		cout << line[i];
	cout << endl;

	char* ptr = nullptr;
	ptr = line;//BA of line

	//while (ptr != nullptr)
	while(*ptr != '\0')
	{
		cout << *ptr;
		ptr++;
	}

	return 0;

}
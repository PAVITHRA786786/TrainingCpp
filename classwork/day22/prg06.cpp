
/*
count the vowels in a string using pointers

*/

#include<iostream>

using namespace std;

int countvowel(char*);

int main()
{
	char s1[200];
	cin.getline(s1, 199);
	cout << "Vowels count: " << countvowel(s1) << endl;
}

int countvowel(char* ptr)
{
	int counter = 0;
	while (*ptr != '\0')
	{

		//logic to find vowels and count
		switch (*ptr)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			counter++;

		}

		ptr++;
	}

	return counter;
}

/*
int main()
{
	string s;
	s.c_str()
	


	char s1[200];
	cin.getline(s1, 1024);
	fgets(s1,199,stdin);//
	for(int i=0;i<strlen(s1);i++)
	cout<<(int)s1[i]<<"="<<s1[i]<<endl;

	s1[str(s1)-1]='\0';
	cout<<s1<<endl;
	for(int i=0;i<strlen(s1);i++)
	cout<<(int)s1[i]<<"="<<s1[i]<<endl;
	
	
}*/

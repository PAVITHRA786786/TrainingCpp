#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string line;
	//ifstream fin("emp1.txt");
	ifstream fin("emp2.txt");
	if (fin.is_open())
		cerr << "Error: opening the file" << endl;
	while(getline(fin, line))
		cout << line << endl;
	fin.close();
	return 0;

}
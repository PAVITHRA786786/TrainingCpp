#include<iostream>
#include<cstring>

using namespace std;

class Student
{
public:
	int rollno;
	string name;
	//string dept;
	//string batch;

};

int main()
{
	Student s;
	cout << sizeof(s) << endl;
	s.name = "abcd";
	s.rollno = 101;

	cout << s.name << "\t" << s.rollno;

	return 0;
}

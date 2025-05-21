#include<iostream>
#include<cstring>

using namespace std;

class Student
{
protected:
	int rollno;
	string name;
public:
	/*void display()
	{
		cout << "Hello World" << endl;
	}*/
	void display(string str1)
	{
		cout << "Hello World, " <<str1<< endl;
		cout << "name: " << name << endl;
	}
	void setName(string s)
	{
		name = s;
	}


};

int main()
{
	Student s;
	cout << sizeof(s) << endl;
	s.display("bhima");
	s.setName("shankar");
	s.display("bhima");
	

	return 0;
}

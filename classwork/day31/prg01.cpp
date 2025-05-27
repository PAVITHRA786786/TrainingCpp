#include<iostream>

using namespace std;

class Test {
	//int v;
//class Employee{
	int emp_id;
	/*int e_id;
	string e_name;
	string e_address;
	int e_phone;*/
public:
	/*Test() { v = 0; }
	Test(int val){ v = val; }

	void setV(int val) { v = val; }
	int getV() { return v; }*/

	Test() { emp_id = 0; }
	Test(int emp_id) { emp_id = emp_id; }

	void setV(int emp_id) { this->emp_id = emp_id; }
	int getV() { return this->emp_id; }

};

int main()
{
	Test t;
	cout << "v= " << t.getV() << endl;

	t.setV(10);
	cout << "v= " << t.getV() << endl;

	return 0;
}
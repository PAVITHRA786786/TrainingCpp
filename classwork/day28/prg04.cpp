//implement employeeclass to add/removie employee use stack operation

#include<iostream>
#include<cstring>
#define MAX 5

using namespace std;

class EMP
{
private:
	int emp_id;
	string emp_name;
public:
	void setId(int);
	int getId() const;
	void setName(string);
	string getName() const;

};

void EMP::setId(int id) {
	emp_id = id;
}
int EMP::getId() const {
	return emp_id;
}
void EMP::setName(string name) {
	emp_name = name;
}
string EMP::getName() const {
	return emp_name;
}

class Stack
{
private:
	int top = -1;
	int bottom = -1;
	EMP arr[MAX]; 
public:
	Stack();
	bool push(EMP&);
	bool pop();
	void display() const;
};

Stack::Stack() {
	top = -1;
	bottom = -1;
}
bool Stack::push(EMP& e)
{
	if (top == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return false;
	}
	top++;
	arr[top] = e;
	return true;
}
bool Stack::pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return false;
	}
	cout << "Employee removed details:" << endl;
	cout << "Emp_Id" << "\t" << "Emp_Name" << endl;
	cout << arr[top].getId() << "\t" << arr[top].getName() << endl;
	top--;
	return true;
}
void Stack::display() const
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top; i >= 0; i--)
	{
		cout << "Emp_Id: " << arr[i].getId() << "\t" << "Emp_Name: " << arr[i].getName() << endl;
	}
	cout << endl;
}

int main()
{
	Stack s;
	EMP e;
	e.setId(101);
	e.setName("abcd");
	e.getId();
	e.getName();
	s.push(e);
	EMP e1;
	e1.setId(102);
	e1.setName("annu");
	e1.getId();
	e1.getName();
	s.push(e1);
	EMP e2;
	e2.setId(103);
	e2.setName("arya");
	e2.getId();
	e2.getName();
	s.push(e2);
	EMP e3;
	e3.setId(104);
	e3.setName("ajay");
	e3.getId();
	e3.getName();
	s.push(e3);
	EMP e4;
	e4.setId(105);
	e4.setName("balu");
	e4.getId();
	e4.getName();
	s.push(e4);
	s.display();
	
	s.pop();
	s.pop();
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.display();
	return 0;
	
}

//implement employeeclass to add/removie employee use stack operation

#include<iostream>
#include<cstring>
#define MAX 5

using namespace std;

class EMP
{
private:
	int top = -1;
	int bottom = -1;
	int arr[MAX];
	string arr1[MAX];
	int emp_id;
	string emp_name;

public:
	EMP();
	EMP(int, string);
	bool push(int,string);
	bool pop();
	void display() const;


};
EMP::EMP() {
	top = -1;
	bottom = -1;
}
EMP::EMP(int id, string name) {
	emp_id = id;
	emp_name = name;
}
bool EMP::push(int id,string name)
{
	if (top == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = id;
	arr1[top] = name;
	

	return 0;

}
bool EMP::pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << "Employees removed detils:" << endl;
	cout << "Emp_Id" << "\t" << "Emp_Name" << endl;
	cout << arr[top] << "\t" << arr1[top] << endl;
	top--;
	cout << endl;
	return 0;

}

void EMP::display() const
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Employees details are===" << endl;
	cout << "Emp_Id" << "\t" << "Emp_Name" << endl;
	for (int i = top;i >= 0;i--)
		cout << arr[i]<<"\t" << arr1[i] << endl;
	
	cout << endl;
	
		
}


int main()
{
	EMP e;
	e.push(101,"abcd");
	e.push(102,"annu");
	e.push(103,"arya");
	e.push(104,"ajay");
	e.push(105,"balu");
	e.push(106,"sonu");
	e.display();


	e.pop();
	e.pop();
	e.display();
	e.pop();
	e.pop();
	e.pop();
	e.pop();
	return 0;
}
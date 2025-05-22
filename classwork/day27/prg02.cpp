#include<iostream>
 
using namespace std;

class Employee {

private:
	int e_id;
	string e_name;
public:
	Employee();
	Employee(int , string );
public:
	void display();
	//destructor used to clean up memory
	~Employee() {
		cout << "Destructor getting called" << endl;
	}
	
	/*Employee() {
		cout << "Default Construct got called" << endl;
		e_id = 0;
		e_name = "";
	}
	Employee(int id, string name)
	{
		cout << " Parameterized Construct got called" << endl;
		e_id = id;
		e_name = name;
	}
public:
  void display()
{
	cout << "display function got called" << endl;
	cout << e_id << "\t" << e_name << endl;
}
	*/
	
};

Employee::Employee() {
	cout << "Default Construct got called" << endl;
	e_id = 0;
	e_name = "";
}
Employee::Employee(int id, string name)
{
	cout << " Parameterized Construct got called" << endl;
	e_id = id;
	e_name = name;
}
void Employee:: display()
{
	cout << "display function got called" << endl;
	cout << e_id << "\t" << e_name << endl;
}

int main()
{
	//default constructor is getting called
	Employee e;
	e.display();
	//parametrized constructor is getting called
	Employee e1(101, "abc1");
	e1.display();
	//default copy constructor is getting called
	Employee e2(e1);
	e2.display();
	Employee e3 = e1;
	e3.display();

	return 0;;
}



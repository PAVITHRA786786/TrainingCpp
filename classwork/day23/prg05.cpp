#include<iostream>

using namespace std;

/*
struct <tagname>
{
members;
};

*/
/*
typedef struct Person
{
	int empPhno;
	string empName;
	string empAddress;
	char empGender;
};
*/
typedef struct Employee
{
	int empID;//id or emp_id;
	int empPhno;
	string empName;
	string empAddress;
	char empGender;

}EMP;

void disp(EMP);
int getEmpDetails(EMP *);

int main()
{
	EMP e1;
	/*
	e1.empID = 101;
	e1.empName = "bhima";
	e1.empAddress = "chennai";
	e1.empGender = 'M';
	e1.empPhno = 6899889786;*/
	getEmpDetails(&e1);
	cout << "Size of EMP : " << sizeof(EMP) << "\t size = " << sizeof(e1) << endl;
	disp(e1);

/*
	cout << "Name: " << e1.empName << endl;
	cout << "ID: " << e1.empID << endl;
	cout << "Gender: " << e1.empGender << endl;
	cout << "Phone: " << e1.empPhno << endl;
	cout << "Address: " << e1.empAddress << endl;
	*/
	EMP e[3];
	for (int i = 0;i < 3;i++)
	{
		getEmpDetails(&e[i]);
		
		/*cout << "ID: ";cin >> e[i].empID;
		cout << "Name: ";cin >> e[i].empName;
		cout << "Gender: ";cin >> e[i].empGender;
		cout << "Phone: ";cin >> e[i].empPhno;
		cout << "Address: ";cin >> e[i].empAddress;*/

	}
	cout << endl;
	/*
	for(int i=0;i<3;i++)
	{
		cout << "Name: " << e[i].empName << endl;
		cout << "ID: " << e[i].empID << endl;
		cout << "Gender: " << e[i].empGender << endl;
		cout << "Phone: " << e[i].empPhno << endl;
		cout << "Address: " << e[i].empAddress << endl; 
		cout << "=======================================" << endl;

	}*/

	for (int i = 0;i < 3;i++)
	{
		disp(e[i]);
	}
	cout << endl;
	
	return 0;
}

void disp(EMP e)
{
	cout << "=======================================" << endl;
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	cout << "Gender: " << e.empGender << endl;
	cout << "Phone: " << e.empPhno << endl;
	cout << "Address: " << e.empAddress << endl;
	cout << "=======================================" << endl;


}

int getEmpDetails(EMP *e)
{
	cout << "Name: ";cin >> e->empName;
	cout << "ID: ";cin >> e->empID;
	cout << "Gender: ";cin >> e->empGender;
	cout << "Phone: ";cin >> e->empPhno;
	cout << "Address: ";cin >> e->empAddress;
	return EXIT_SUCCESS;
}


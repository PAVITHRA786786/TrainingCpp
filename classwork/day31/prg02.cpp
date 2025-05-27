#include<iostream>
#include"emp.h"


using namespace std;


int main()
{
	Employee empObj;

	empObj.set_e_id(1011);
	empObj.set_e_name("annu");
	empObj.set_e_address("Bangalore");
	empObj.set_e_phone(8765);

	cout << "Name: " << empObj.get_e_name() << endl;

}
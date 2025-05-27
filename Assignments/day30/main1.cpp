#include<iostream>
#include"Emplist.h"
using namespace std;

int main()
{
	EmpList e;
	e.addEnd(101, "John", 50000);
	e.addEnd(102, "Alice", 60000);
	e.addEnd(103, "Bob", 55000);
	e.display();
	e.delNode(103);
	e.display();
	e.search("Alice");
	e.update(102, 45000);
	e.display();


	return 0;
}
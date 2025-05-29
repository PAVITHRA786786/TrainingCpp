// hybrid inheritance

#include<iostream>
#include<cstdlib>
#include<Windows.h>

using namespace std;

class A
{
public:
	void dispA() { cout << "A is called" << endl; }
};

class B:virtual public A
{
public:
	void dispB() { cout << "B is called" << endl; }
};

class C:virtual public A
{
public:
	void dispC() { cout << "C is called" << endl; }
};

class D:public B, public C
{
public:
	void dispD() { cout << "D is called" << endl; }
};

int main()
{
	D objD;
	objD.dispB();
	//system("cls");
	//system("date");
	//system("pause");
	//Sleep(10);

	objD.dispC();
	objD.dispD();
	objD.dispA();

	return 0;
}
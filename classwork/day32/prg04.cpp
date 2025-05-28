#include<iostream>

using namespace std;

class A {
protected:
	int a;
	void dispAPrt() { cout << "A:Method of protected" << endl; }
public:
	A() { a = 10; }
	void dispA() { cout << "A: a = " << a << endl; }
};

//class B :public A
//class B:private A
class B:protected A
{
public:
	void dispB() {
		a = 20;
		dispAPrt();
		dispA();
	}
};
//class C :public B
class C:protected B
{
public:
	void dispC()
	{
		dispB();
	}
};

int main()
{
	//A objA;
	//objA.dispA();
	//B objB;
	//objB.dispB();
	//objB.dispA();
	C objC;
	objC.dispC();
	//objC.dispB();

	return 0;
}
















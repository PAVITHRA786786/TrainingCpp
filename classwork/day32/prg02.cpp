//multi-level inheritance

#include<iostream>

using namespace std;

class A {
protected:
	int a;
public:
	A(int x) :a(x) { cout << "constr A got called and a = "<<a << endl; }
	~A() { cout << "Destr A got called" << endl; }
	void dispA() { cout << "a = " << a << endl; }
};

class B :public A
{
protected:

	int b;
public:
	B(int x,int y) : A(x),b(y) { cout << "constr B got called and b = "<<b << endl; }
	~B() { cout << "Destr B got called" << endl; }
	void dispB() { cout << "b = " << b << endl;
	cout << "a = " << a << endl;
	}
};

class C :public B
{
	int c;
public:
	C(int x, int y, int z) : B(x,y), c(z) { cout << "constr C got called" << endl; }
	~C() { cout << "Destr C got called" << endl; }
	void dispC() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	    cout << "c = " << c << endl; 
	}
};

int main()
{
	//B objB(10, 20);
	//objB.dispB();
	C objC(10, 20, 30);
	objC.dispC();

	return 0;
}

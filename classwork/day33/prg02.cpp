//upcasting

#include<iostream>

using namespace std;

// Abstract base class
class Animal
{
public:
	virtual void eat() = 0;
	virtual void drink() = 0;
	virtual void breathe() = 0;
	virtual void sleep() = 0;
	virtual void move() = 0;
	virtual void lifetime() = 0;
};

class Cat :public Animal
{
public:
	void eat() {};
	void drink() {};
	void breathe() {};
	void sleep() {};
	void move() {};
	void lifetime() {};
	//virtual void dispCat() = 0;
};


int main()
{
	Cat c;


}



/*
class B {
public:
	void printB() { cout << "PrintB" << endl; }
	virtual void disp() = 0;
};

class D :public B
{
public:
	void printD() { cout << "PrintD" << endl; }
	void disp() { cout << "D" << endl; }
};

int main()
{
	D d;
	d.printD();
	
	return 0;
}*/
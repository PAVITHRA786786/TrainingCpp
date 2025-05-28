#include<iostream>

using namespace std;

class Animal
{
public:
	void eat() { cout << "Eat"; }
	void walk() { cout << "Walk"; }
	void makeasound() { cout << "Make a sound"; }
	virtual void soundlike() { cout << "Animal sound"; }
};

class Test
{

};
class Cat :public Animal
{
public:
	void dispCat() { cout << "Cat"; }
	void soundlike() { cout << " Meow!"; }  //overridden by the base class method

};

class Dog :public Animal
{
public:
	void dispDog() { cout << "Dog"; }
	void soundlike() { cout << " bow!"; }

};

int main()
{
	Animal* bcPtr = nullptr;
	Cat c;
	Dog d;
	c.dispCat();
	cout << " can ";
	c.eat();
	cout << " and can ";
	c.walk();
	cout << " and also ";
	c.makeasound();
	cout << " like:";
	c.soundlike();
	cout << endl << "================" << endl;
	d.dispDog();
	cout << " can ";
	d.eat();
	cout << " and can ";
	d.walk();
	cout << " and also ";
	d.makeasound();
	cout << " like:";
	d.soundlike();
	cout << endl << "================" << endl;


	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundlike();
	cout << endl << "================" << endl;

	bcPtr = &d;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundlike();
	cout << endl << "================" << endl;

	/*Test* bcPtr1 = nullptr;
	bcPtr1 = &c;
	bcPrt1.*/

	return 0;
}
/*

A vehicle company is deciding to hire a programmer to develop a system that will allow the
company to enter the details of the vehicles sold by them. As a programmer, you need to
implement a program that contains a base class called Vehicles that contains a data
member to store the price of the vehicles. Derive two other classes named as Car and
Motorcycle.
• The Car class will contain data members to store details that include seating capacity,
number of doors and fuel type (diesel or petrol).
• The Motorcycle class will contain data members to store details such as the number
of cylinders, the number of gears and the number of wheels.
Derive another subclass named as Audi of Car and Yamaha of Motorcycle.
• The Audi class will contain a data member to store the model type.
• The Yamaha class will contain a data member to store the make – type.
Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model
type) and the details of the Yamaha motorcycle (price, number of cylinders, number of
gears, number of wheels, make – type)

*/

#include<iostream>
#include<cstring>

using namespace std;


class Vehicle
{
protected:
	int price;
public:
	Vehicle(int p): price(p){}
	void dispVehicle()
	{
		cout << "Vehicle price: " << price << endl;
	}

};

class Car:public Vehicle
{
protected:
	int capacity;
	int doors; 
	string fuel_type;
public:
	Car(int p,int c,int d,string f):Vehicle(p),capacity(c),doors(d),fuel_type(f){}

	void dispCar()
	{
		
		cout << "Audi details" << endl;
		cout << "=============" << endl;
		dispVehicle();
		cout << "seating capacity: " <<capacity<< endl;
		cout<<"number of doors: " <<doors<<endl;
		cout << "fuel type(diesel or petrol): " << fuel_type << endl;
		
	}
};

class Motorcycle:public Vehicle
{
protected:
	int cylinders;
	int gears;
	int wheels;
public:
	Motorcycle(int p,int cy,int g,int w):Vehicle(p),cylinders(cy),gears(g),wheels(w){}

	void dispMotorcycle() {
		
		cout << "Yamaha details" << endl;
		cout << "=============" << endl;
		dispVehicle();
		cout << "the number of cylinders: " << cylinders << endl;
		cout << "the number of gears: " << gears << endl;
		cout << "the number of wheels: " << wheels << endl;
		
	}
};

class Audi :public Car
{
protected:
	string model_type;
public:
	Audi(int p, int c, int d, string f,string m) : Car(p,c,d,f), model_type(m) {}
		

	void dispAudi()
	{
		dispCar();
		cout << "Model type: " << model_type << endl;
		cout << endl;
	}
};
	
class Yamaha :public Motorcycle
{
protected:
	string make_type;
public:
	Yamaha(int p, int cy, int g, int w,string m) :Motorcycle(p,cy, g, w), make_type(m) {}

	void dispYamaha()
	{
		dispMotorcycle();
		cout << "Make type: " << make_type << endl;
		cout << endl;
	}
};

int main()
{
	Audi ObjAudi(10000, 7, 5,"diesel","SUV");
	ObjAudi.dispAudi();
	Yamaha ObjYamaha(200000, 1, 6, 4, "sedan");
	ObjYamaha.dispYamaha();
	
	return 0;
}




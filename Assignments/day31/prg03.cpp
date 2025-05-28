/*
Problem 3: Vehicle Rental System
Concepts: Class, Single Inheritance, Constructor, Method Overloading

Problem Statement: Design a base class Vehicle with attributes vehicleId, type, and ratePerKm. Derive two classes Car and Bike from it. Use constructors to initialize values. Overload a method calculateFare() to:

Accept only distance
Accept distance and number of days (for long-term rental with discount)
Input:

Vehicle Type: Car
Vehicle ID: C100
Rate: 15
Distance: 100
Days: 3
Expected Output:

Fare without discount: ₹1500
Fare with long-term discount: ₹1350
Assume 10% discount for rentals > 2 days
*/


#include<iostream>
#include<cstring>

using namespace std;

class Vehicle {
private:
	string vehicleId;
	string type;
	float ratePerKm;
public:
    Vehicle(string id, string t, float rate) : vehicleId(id), type(t), ratePerKm(rate) {}

	void display() const {
		cout << "Vehicle Type: " << type << endl;
		cout << "Vehicle ID: " << vehicleId << endl;
		cout << "Rate: " << ratePerKm << endl;
	}
	float getRate() const {
		return ratePerKm;
	}
};

class Car : public Vehicle {
private:
	float distance;
	int days;
public:
	Car(string id, string type,float rate, float dist, int d) : Vehicle(id,type, rate), distance(dist), days(d) {}

	float calculateFare() const {
		return distance * getRate();
	}

	/*float calculateFareWithDiscount() const {
		if (days > 2) {
			return calculateFare() * 0.9; 
		}
		return calculateFare();
	}*/

	float calculateFare(int n) const {
		while (n == 1) {
			if (days > 2) {
				return calculateFare() * 0.9;
			}
			return calculateFare();
		}
	}

	void displayFare(int n) const {
		if (n == 1)
		{
			cout << "Fare without discount: ₹" << calculateFare() << endl;
			cout << "Fare with long-term discount: ₹" << calculateFare(1) << endl;
		}
	}
};

class Bike : public Vehicle {
private:
	float distance;
	int days;
public:
Bike(string id, string type, float rate, float dist, int d) : Vehicle(id, type, rate), distance(dist), days(d) {}

	float calculateFare() const {
		return distance * getRate();
	}

	float calculateFare(int n) const {
		while (n == 1) {
			if (days > 2) {
				return calculateFare() * 0.9;
			}
			return calculateFare();
		}
	}

	void displayFare() const {
		
		cout << "Fare without discount: ₹" << calculateFare() << endl;
		cout << "Fare with long-term discount: ₹" << calculateFare(1) << endl;
	}
};

int main() {
	string v_type, v_id;
	float rate, distance;
	int days;

	cout << "Enter Vehicle Type (Car/Bike): ";
	cin >> v_type;
	cout << "Enter Vehicle ID: ";
	cin >> v_id;
	cout << "Enter Rate: ";
	cin >> rate;
	cout << "Enter Distance: ";
	cin >> distance;
	cout << "Enter Days: ";
	cin >> days;

	if (v_type == "Car") {
		Car c(v_id, v_type, rate, distance, days);
		c.displayFare(1);
	}
	else 
	{
		Bike b(v_id, v_type, rate, distance, days);
		b.displayFare();
	}
	

	return 0;
}

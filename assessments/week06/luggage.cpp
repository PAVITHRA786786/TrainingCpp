/*4. Luggage Weight Checker
Objective : Validate if luggage is overweight.
Class :
	Luggage
	Attributes :
Passenger Name
Weight(kg)
Limit(default 20kg)
Methods :
	Constructor
	checkOverweight()
	Test Case 1:
Luggage l1("Rita", 18);
l1.checkOverweight();
Expected Output:
Luggage within limit.
Test Case 2:
Luggage l2("Sam", 25);
l2.checkOverweight();
Expected Output:
Overweight! Exceeded by 5 kg.
	*/

#include<iostream>
#include<cstring>
#include"luggage.h"

using namespace std;



Luggage::Luggage(char* n, int w, int l) {
	strcpy(PassengerName, n);
	Weight = w;
	Limit = l;
}

void Luggage::checkOverweight() {
	Limit = 20;
	if (Weight <= Limit) {
		cout << "Luggage within limit." << endl;
	}
	else {
		int excess = Weight - Limit;
		cout << "Overweight! Exceeded by " << excess << " kg." << endl;
	}
	
}

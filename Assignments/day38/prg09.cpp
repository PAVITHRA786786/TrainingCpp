/*
Problem 5: Schedule Conflict Detection
You are managing a calendar system. Given a list of booked time slots (integers in 24-hour format), check if a new time overlaps.

Use a set<int> to store booked hours and check if the new slot exists before booking.

📝 Input:

BOOK 10
BOOK 14
BOOK 10  // duplicate
CHECK 11
BOOK 11
🟢 Output:

Booked: 10
Booked: 14
Already Booked
Free
Booked: 11

*/


#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	set<int> bookedHours;
	string command;
	int hour;
	
	while (true) {
		cin >> command;

		if (command == "BOOK") {
			cin >> hour;
			if (bookedHours.find(hour) != bookedHours.end()) {
				cout << "Already Booked" << endl;
			}
			else {
				bookedHours.insert(hour);
				cout << "Booked: " << hour << endl;
			}
		}
		else if (command == "CHECK") {
			cin >> hour;
			if (bookedHours.find(hour) != bookedHours.end()) {
				cout << "Already Booked" << endl;
			}
			else {
				cout << "Free" << endl;
			}
		}
	}

	return 0;
}














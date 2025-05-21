#include <iostream>

#include "clock.h"

using namespace std;

void Clock::setHours(int h)
{
	hours = h;
}

int Clock::getHours() {
	return hours;
}
void Clock::setMin(int m) {
	minutes = m;
}
int Clock::getMin() {
	return minutes;
}
void Clock::setSec(int s) {
	seconds = s;
}
int Clock::getSec() {
	return seconds;
}
void Clock::display() {
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
}
void Clock::tick() {
	seconds++;
	if (seconds == 60) {
		seconds = 0;
		minutes++;
	}
	if (minutes == 60) {
		minutes = 0;
		hours++;
	}
	if (hours == 24) {
		hours = 0;
	}
}
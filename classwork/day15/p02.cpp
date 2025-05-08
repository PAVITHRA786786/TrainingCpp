/*
area of rectangle, triangle, circle, square.

*/

#include<iostream>
#define PI 3.14
using namespace std;

void menu(char ch);
void display1(float,float);
void display2(float, float);
void display3(float, float);
void display4(float, float);

int main()
{
	menu(0);

	return 0;
}
void menu(char ch)
{
	cout << "Enter your choice: r for rectangle,t for triangle,c for circle,s for square" << endl;
	cin >> ch;
	switch (ch)
	{
	default:
		cout << "Invalid choice" << endl;
	    break;
	case 'r':
			cout << "Area of rectangle" << endl;
			display1(0, 0);
			break;
	case 't':
			cout << "Area of triangle" << endl;
			display2(0, 0);
			break;
	case 'c':
		cout << "Area of circle" << endl;
		display3(0, 0);
			break;
	case 's':
		cout << "Area of square" << endl;
		display4(0, 0);
		break;
		
	}
	
}

void display1(float a,float b)
{

	float area;
	cout << "Enter length and breadth of rectangle: " << endl;
	cin >> a >> b;
	area = a * b;
	cout << "Area of rectangle is: " << area << endl;
}
void display2(float a, float b)
{
	float area;
	cout << "Enter base and height of triangle: " << endl;
	cin >> a >> b;
	area = 0.5 * a * b;
	cout << "Area of triangle is:" << area << endl;
}
void display3(float a, float b)
{
	float area;
	cout << "Enter radius of a circle:" << endl;
	cin >> a;
	area = PI * a * a;
	cout << "Area of circle is:" << area << endl;
}
void display4(float a, float b)
{
	float area;
	cout << "Enter the side of a square:" << endl;
	cin >> a;
	area = a * a;
	cout << "Area of square is:" << area << endl;
}
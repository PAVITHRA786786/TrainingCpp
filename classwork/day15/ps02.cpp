/*
area of rectangle,triangle,circle,square using command line argruments
*/

#include<iostream>
using namespace std;

void menu(int);
void display1(float, float);
void display2(float, float);
void display3(float, float);
void display4(float, float);

int main(int argc, char* argv[])
{

	if (argc > 1)
		menu(atoi(argv[1]));
	else
		menu(-1);
}

void menu(int ch)
{
	if (ch == -1)
		ch = display(0);
	
	switch (ch)
	{
	default:
		cout << "Invalid choice" << endl;
		break;
	case '1':
		cout << "Area of rectangle" << endl;
		display1(0, 0);
		break;
	case '2':
		cout << "Area of triangle" << endl;
		display2(0, 0);
		break;
	case '3':
		cout << "Area of circle" << endl;
		display3(0, 0);
		break;
	case '4':
		cout << "Area of square" << endl;
		display4(0, 0);
		break;

	}
}
int display(int)
{
	cout << "Enter your choice: 1 for rectangle,2 for triangle,3 for circle,4 for square" << endl;
}
void display1(float a,float b)
{

	float area;
	cout << "Enter length and breadth of rectangle: " << endl;
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
	
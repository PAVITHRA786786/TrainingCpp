#include<iostream>

using namespace std;

typedef struct shape
{
	int length;
	int width;
}SHAPE;

int main()
{
	SHAPE s1, s2;
	s1.length = 10;
	s1.width = 20;

	s2.length = 30;
	s2.width = 40;

	SHAPE s3;

	s3.length = s1.length + s2.length;
	s3.width = s1.width + s2.width;

	cout << s3.length << "\t" << s3.width << endl;

	SHAPE s4 = s3;
	cout << s4.length << "\t" << s4.width << endl;

	s4.length = 100;
	s4.width = 70;
	cout << s3.length << "\t" << s3.width << endl;
	cout << s4.length << "\t" << s4.width << endl;
	
	s4.length = s3.length;
	s4.width = s3.width;
	SHAPE s5;
	s5= s4;
	cout << s5.length << "\t" << s5.width << endl;

	return 0;
}
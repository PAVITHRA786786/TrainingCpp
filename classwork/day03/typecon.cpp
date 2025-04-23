#include <iostream>

	using namespace std;

	void typeconvimp()
	{
		int a = 10;
		float b = 5.5;
		float result = a + b;
		cout << "result = " << result << endl;

		char c = 'a';
		int ret = c + a;
		cout << "result=" << ret << endl;

		double d = 10.99;
		double rest = b + d;
		cout << "result=" << rest << endl;
		
	}

	void typeconvexp()
	{
		int a = 10;
		int b = 3;
		float ret = (float)a / (float)b;
		cout << ret << endl;

		b = (float)a;
		cout << b <<endl;
	}
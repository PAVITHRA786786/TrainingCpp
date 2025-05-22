#include<iostream>

using namespace std;

class T {

private:
//public:
	static int val;
public:
	T() {
		val++;
	}static int getVal()
	{
		return val;
	}
	void disp() {
		cout << "Value of val: " <<val<< endl;
	}
};

int T::val=10;

int main()
{
	T* t = new T[10];
	t[0].disp();
	T t1;
	t1.disp();
	//cout << T::val << endl;
	T t2;
	t2.disp();
	t1.disp();
	return 0;
}






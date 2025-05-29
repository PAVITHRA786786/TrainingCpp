#include<iostream>

using namespace std;

template <class T1,class T2>
class Cal
{
private:
	T1 Data1;
	T2 Data2;
public:
	Cal(T1 v1,T2 v2):Data1(v1),Data2(v2){}

	float calAdd()
	{
		return Data1 + Data2;
	}
	float calSub()
	{
		return Data1 - Data2;
	}
	float calMul()
	{
		return Data1 * Data2;
	}
	float calDiv()
	{
		return Data1 / Data2;
	}
	
};

int main()
{
	Cal<int, float> intCal(20, 5.5);
	cout << "Addition: " << intCal.calAdd()<<endl;
	cout << "Subtraction: " << intCal.calSub()<<endl;
	cout << "Multiplication: " << intCal.calMul() << endl;
	cout << "Division: " << intCal.calDiv() << endl;
	
	return 0;

}
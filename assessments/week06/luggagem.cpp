#include<iostream>
#include<cstring>
#include"luggage.h"
using namespace std;

int main()
{
	char name[20] = "Rita";
	int weight = 18;
	int limit = 20;
	Luggage l1(name, weight, limit);
	l1.checkOverweight();

	cout << endl;

	char name2[20] = "Sam";
	int weight2 = 25;
	Luggage l2(name2, weight2, limit);
	l2.checkOverweight();

	return 0;
}
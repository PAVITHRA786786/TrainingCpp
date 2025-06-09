#include<iostream>
#include<list>
#include"emp.h"

using namespace std;

int main()
{
	Employee e1(101, "abcd1");
	Employee e2(102, "abcd2");
	Employee e3(103, "abcd3");
	Employee e4(104, "abcd4");
	Employee e5(105, "abcd5");
	Employee e6(106, "abcd6");
	Employee e7(107, "abcd7");
	Employee e8(e2);

	std::list<Employee>listStuds;

	listStuds.push_front(e1);
	listStuds.push_back(e2);
	listStuds.emplace_front(e3);
	listStuds.emplace_back(e4);
	listStuds.insert(listStuds.begin(), e5);

	for (auto lS : listStuds)
		lS.display();

	listStuds.reverse();
	cout << "========================" << endl;
	for (auto lS : listStuds)
		lS.display();

	listStuds.remove(e2);
	cout << "========================" << endl;
	for (auto lS : listStuds)
		lS.display();

	cout << endl;
	return 0;
}

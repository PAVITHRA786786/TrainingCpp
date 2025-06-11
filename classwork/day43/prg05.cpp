#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	std::deque<char> dq = { 'A', 'B', 'C' };
	list<int> l = { 1,2,3 };
	auto it = dq.begin();
	cout << it[1] << endl;

	auto itl = l.begin();
	cout << *itl << endl;

	// for (auto it = dq.begin(); it != dq.end(); ++it) std::cout << *it;

	return 0;
}
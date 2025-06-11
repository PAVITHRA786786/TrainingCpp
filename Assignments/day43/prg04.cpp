/*
Problem 4: Set Filter
Use a set<int> to store even numbers from a list and print using const_iterator.
*/

#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> num = { 2,4,6,8,10 };

	for (set<int>::const_iterator it = num.cbegin();it != num.end();++it)
		cout << *it<<" ";
	return 0;
}
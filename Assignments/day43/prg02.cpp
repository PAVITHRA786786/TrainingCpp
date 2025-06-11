/*
 Problem 2: Map Rank Adjuster
Given a map<string, int> with student names and marks, increase marks by 5 if current mark is below 50.
*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<string, int> m = { {"Alice", 50}, {"Bob", 65} ,{"Eve",40} };
	for (auto& it : m) {
		if (it.second >= 50) {
			it.second += 5;
		}
	}

	for (auto it = m.begin(); it != m.end(); ++it)
		cout << it->first << ", " << it->second << endl;
	
	return 0;

}



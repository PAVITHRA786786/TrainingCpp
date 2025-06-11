/*
Problem 5: Count Unique Words
Read vector<string> of words. Use set<string>::iterator to find and display unique ones.

*/

#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main()
{
    vector<string> words = { "apple", "banana", "apple", "orange", "banana", "kiwi" };
	set<string> unique;

	for (const auto& w : words) {
		unique.insert(w);
	}

	for (set<string>::iterator it = unique.begin(); it != unique.end(); ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	return 0;
}
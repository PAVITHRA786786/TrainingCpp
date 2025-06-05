/*
Problem 4: Auto-Suggestions System
Implement an autocomplete feature using a set<string>.

Add keywords to dictionary.
Given a prefix, return all matching words in sorted order.
📝 Input:

Insert: apple, application, banana, apply, ball
Query: "app"
🟢 Output:

apple
application
apply
(Hint: use lower_bound and string prefix check)


*/


#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	set<string> dictionary;
	string command, word;

	
	while (true) {
		cin >> command;
		if (command == "Insert:") {
			while (cin >> word && word != "END") {
				dictionary.insert(word);
			}
		}
		else if (command == "Query:") {
			cin >> word;
			auto it = dictionary.lower_bound(word);
			for (; it != dictionary.end() && it->find(word) == 0; ++it) {
				cout << *it << endl;
			}
			break; 
		}
	}
	
	for (const auto& w : dictionary) {
		cout << w << " ";
	}

	return 0;
}























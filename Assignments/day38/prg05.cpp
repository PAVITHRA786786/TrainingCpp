/*
Practice Problem Set – std::set (No Duplicates, Auto-Sorted)
✅ Problem 1: Unique Visitor Tracker
An online platform wants to track unique users visiting the site. User IDs are integers.

Operations supported:

VISIT user_id → Add a user
UNIQUE → Print number of unique visitors
TOP → Print user IDs in ascending order
📝 Input:

VISIT 101
VISIT 105
VISIT 101
VISIT 110
UNIQUE
TOP
🟢 Expected Output:

3
101 105 110


*/

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	std::set<int> visitor;
	std::string command;
	int user_id;
	
	while (true) {
		cin >> command;

		if (command == "VISIT") {
			cin >> user_id;
			visitor.insert(user_id);
		}
		
		else if (command == "UNIQUE") {
			cout << visitor.size() << endl; 
		}
		else if (command == "TOP") {
			for (const auto& id : visitor) {
				cout << id << " "; 
			}
			cout << endl;
		}
	}
	return 0;
}












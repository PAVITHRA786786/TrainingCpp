/*
std::deque<string> – Recent Command Tracker
📌 Problem: Command History with Limit
Simulate a command line's history feature using std::deque<string>.

Only the last N commands are stored.
When the limit exceeds, the oldest is removed from the front.
🔧 Constraint: N = 4
🧾 Input Commands:
RUN ls
RUN mkdir test
RUN cd test
RUN touch file.txt
RUN cat file.txt
HISTORY
✅ Expected Output:
mkdir test
cd test
touch file.txt
cat file.txt
💡 Hint:
Push to back, pop from front when deque.size() > N.
*/

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	std::deque<std::string> commands;
	const int N = 4; 
	commands.push_back("RUN ls");
	commands.push_back("mkdir test");
	commands.push_back("cd test");
	commands.push_back("touch file.txt");
	commands.push_back("cat file.txt");
	if (commands.size() > N) {
		commands.pop_front(); 
	}
	commands.push_back("HISTORY");
	for (const auto& cmd : commands) {
		if (cmd == "HISTORY") {
			commands.pop_back(); 
			for (const auto& history : commands) {
				cout << history << endl; 
			}
			break; 
		}
	}

	return 0;
}











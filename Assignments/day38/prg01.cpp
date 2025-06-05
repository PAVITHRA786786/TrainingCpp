/*
std::list<string> – Text Editor Buffer (Doubly Linked List)
📌 Problem: Text Line Navigator
Design a line-based text editor using std::list<string>.

Users can insert a new line at the cursor.
They can navigate UP or DOWN.
Print the full text at the end.
🧾 Input (Operations):
INSERT Hello
INSERT World
UP
INSERT Beautiful
DOWN
INSERT People
PRINT
✅ Expected Output:
Hello
Beautiful
World
People
💡 Hint:
Use an iterator as a cursor to insert or move.



*/

#include<iostream>
#include<list>
#include<string>

using namespace std;

int main()
{
	std::list<std::string> text = { "Hello" };
	auto it = std::find(text.begin(), text.end(), "Hello");
	text.push_back("Beautiful");
	text.push_back("World");
	text.push_back("People");
	it = text.begin();
	while (it != text.end()) {
		if (*it == "UP") {
			if (it != text.begin()) {
				--it; 
			}
		}
		else if (*it == "DOWN") {
			if (std::next(it) != text.end()) {
				++it;
			}
		}
		else if (*it == "INSERT") {
			it = text.insert(it, "New Line"); 
			++it; 
		}
		else if (*it == "PRINT") {
			for (const auto& line : text) {
				cout << line << endl; 
			}
			break; 
		}
		it++; 

	}
	
	for (const auto& line : text) {
		cout << line << endl;
	}
	
	return 0;
}
/*
std::forward_list<string> – Chat History Cleanup
📌 Problem: Clean Deleted Messages
In a messaging app, each message is stored in a std::forward_list<string>.

Messages that start with "DELETED:" must be removed.
Implement a cleaner that:

Traverses the list
Removes all "DELETED:" prefixed messages
🧾 Input:
["Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"]
✅ Expected Output:
["Hi", "Hello", "How are you?"]
💡 Hint:
Use forward_list::remove_if or manual traversal using before_begin().

*/


#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main()
{
	std::forward_list<std::string> messages = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };

	messages.remove_if([](const std::string& msg) {
		return msg.find("DELETED:") == 0; 
	});

	
	for (const auto& msg : messages) {
		cout << " [ " << msg << " ] "<< ",";;
	}
	

	return 0;
}






















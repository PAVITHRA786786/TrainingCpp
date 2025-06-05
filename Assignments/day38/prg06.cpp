/*
Problem 2: Banned Words Filter
Given a list of banned words, you need to filter them from an input paragraph.

Use set<string> to store banned words and check each word from the paragraph.

📝 Input:

Banned: {"bad", "evil", "vulgar"}
Text: "this is a bad example with evil words"
🟢 Output:

Filtered: this is a example with words
*/

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	set<string> words = {"bad", "evil", "vulgar"};
	string text = "this is a bad example with evil words";
	string filText;

	size_t pos = 0;
	while ((pos = text.find(' ')) != string::npos) {
		string word = text.substr(0, pos);
		if (words.find(word) == words.end()) {
			filText += word + " ";
		}
		text.erase(0, pos + 1);
	}
	
	if (words.find(text) == words.end()) {
		filText += text;
	}

	cout << "Filtered: " << filText << endl;

	return 0;
}











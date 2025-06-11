/*
Browser History Navigation(Stack)
Problem: Simulate a browser’s back and forward buttons using two stacks.

When the user visits a new URL, push it onto the “back” stack and clear the “forward” stack.
When the user clicks "Back," pop the current page from the “back” stack and push it to the “forward” stack.
When the user clicks "Forward," pop the top page from the “forward” stack back to the “back” stack.
Input : A sequence of commands :

"visit <URL>"
"back"
"forward"
Output : Print the current URL after each command.
Sample Input:
visit google.com
visit stackoverflow.com
back
visit github.com
back
forward
forward
Expected Output:
Current page: google.com
Current page: stackoverflow.com
Current page: google.com
Current page: github.com
Current page: google.com
Current page: github.com
Current page: github.com
*/


#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<string> back;
	stack<string> forward;
	string cmd, currentPage;

	while (true) {
		getline(cin, cmd);
		
		if (cmd == "exit") {
			break;
		}
		else if (cmd.substr(0, 6) == "visit ") {
			if (!currentPage.empty()) {
				back.push(currentPage);
			}
			currentPage = cmd.substr(6);
			while (!forward.empty()) {
				forward.pop();
			}
		}
		else if (cmd == "back") {
			if (!back.empty()) {
				forward.push(currentPage);
				currentPage = back.top();
				back.pop();
			}
			else {
				cout << "No pages in back history." << endl;
			}
		}
		else if (cmd == "forward") {
			if (!forward.empty()) {
				back.push(currentPage);
				currentPage = forward.top();
				forward.pop();
			}
			else {
				cout << "No pages found" << endl;
			}
		}
		else {
			cout << "Invalid " << endl;
			continue;
		}

		cout << "Current page: " << currentPage << endl;
	}	

	return 0;
}

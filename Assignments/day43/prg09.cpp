/*

Balanced Parentheses Checker (Stack)
Problem: Given a string containing characters '(', ')', '{', '}', '[' and ']', check if the parentheses are balanced using a stack.

Input: A string expression.

Output: Print "Balanced" or "Not Balanced".

Sample Input 1:
{[()]}
Output 1:
Balanced
Sample Input 2:
{[(])}
Output 2:
Not Balanced

*/


#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void Balance(vector<string> expr) {
		stack<char>s;
		for (const auto& ex : expr) {
			for (char ch : ex) {
				if (ch == '{' || ch == '[' || ch == '(') {
					s.push(ch);
				}
				else if (ch == '}' || ch == ']' || ch == ')') {
					if (s.empty()) {
						cout << " Not Balanced" << endl;
						return;
					}
					char top = s.top();
					s.pop();
					if ((ch == '}' && top != '{') ||
						(ch == ']' && top != '[') ||
						(ch == ')' && top != '(')) {
						cout << "Not Balanced" << endl;
						return;
					}
				}
			}
		}
		cout << (s.empty() ? "Balanced" : "Not Balanced") << endl;
	}


int main()
{
	vector<string> bal = {"{[()]}","{[(])}","{{[[(())]]}}"};
	for (const auto& b : bal) {
		Balance({ b });
	}
	//vector<string> bal;
	//getline(cin, bal);

	
	return 0;
}
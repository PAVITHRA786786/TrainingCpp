/*
Problem 5: Undo/Redo Browser Simulator (Using std::deque)
Objective: Simulate a mini-browser with the following operations:

visit <url>: visit a new page.
back: go back to the previous page.
forward: go to the next page.
current: show the current page.
Requirements:

Use two std::deque<std::string>:

One for back history.
One for forward history.
Handle edge cases (e.g., no back/forward possible).

Clear forward history if a new page is visited after going back.

Bonus: Support history command to list full browsing history.

Challenge Level: Advanced Focus Areas: deque operations at both ends, command parsing, state management.



*/

#include<iostream>
#include<deque>
#include<string>


int main()
{
	std::deque<std::string> history;
	history.push_back("google.com");
	history.push_back("github.com");
	history.push_back("stackoverflow.com");
	
	for (const auto& his : history)
		std::cout << "Visited: " << his << std::endl;

	history.pop_back();
	std::cout << "Back to: " << history.back() << std::endl;

	history.pop_back();
	std::cout << "Back to: " << history.back() << std::endl;

	history.push_back("github.com");
	std::cout << "Farward to: " << history.back() << std::endl;

	std::cout << "Current page: " << history.back() << std::endl;

	history.push_back("openai.com");
	std::cout << "Visited: " << history.back() << std::endl;

	history.pop_back();
	std::cout << "No forward history!"<< std::endl;
	std::cout << "Back to: " << history.back() << std::endl;
	std::cout << "Current page: " << history.back() << std::endl;

	std::cout << "Browsing History:" << std::endl;
	history.push_back("google.com");
	std::cout << "Back Stack: " << history.back() << std::endl;

	history.pop_back();
	std::cout << "Current: " << history.back() << std::endl;

	history.push_back("openai.com");
	std::cout << "forward stack: " <<history.back()<< std::endl;

	return 0;
}























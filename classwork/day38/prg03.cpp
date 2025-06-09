/*
Problem 2: Scoreboard Manager (Using std::vector)
Objective: Design a scoreboard system that reads scores from users (unbounded in size) and maintains:

Top 3 highest scores.
Sorted score list (descending).
Requirements:

Use std::vector<int> for storing scores.
Continuously accept input until -1 is entered.
Sort scores in descending order.
Extract and display the top 3 scores.
Bonus: Remove duplicate scores before sorting.

Challenge Level: Intermediate → Advanced Focus Areas: Sorting, input handling, use of vector::erase, std::unique, and iterators.


*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


void display(const vector<int>& v) {
	for (int num : v) cout << num << " ";
	cout << endl;
}


int main()
{
	vector<int> s;
	s.push_back(45);
	s.push_back(70);
	s.push_back(55);
	s.push_back(70);
	s.push_back(90);
	s.push_back(-1);

	sort(s.begin(), s.end());
	cout << "After sorting: ";
	display(s);

	cout << "Top 3 Scores: ";
	for (int i = s.size() - 1; i >= max(0, (int)s.size() - 3); --i) {
		cout << s[i] << " ";
	}
	cout << endl;

	auto end = unique(s.begin(), s.end());
	s.erase(end, s.end());
	cout << "Unique Scores(Sorted) : ";
	display(s);

	return 0;


}








/*
std::vector<string> – Batch Word Processing
📌 Problem: Normalize Case and Sort
Given a set of words, normalize them by:

Converting all to lowercase
Sorting them
Removing duplicates
Use std::vector<string> for input storage and manipulation.

🧾 Input:
["Apple", "banana", "apple", "Orange", "BANANA", "grape"]
✅ Expected Output:
["apple", "banana", "grape", "orange"]
💡 Hint:
Use std::transform, sort, and unique with erase.
*/


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	std::vector<std::string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };
	
	
	std::transform(words.begin(), words.end(), words.begin(),
		[](std::string& word) {
					   std::transform(word.begin(), word.end(), word.begin(), ::tolower);
					   return word;
		});
	
	
	std::sort(words.begin(), words.end());
	auto last = std::unique(words.begin(), words.end());
	words.erase(last, words.end());
	
	
	for (const auto& word : words) {
		cout << " ["<<""<<word<<""<<"] " ;
	}
	
	return 0;
}





















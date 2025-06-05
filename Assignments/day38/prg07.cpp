/*
Problem 3: Unique Stock Prices
You're tracking real-time stock prices and want to:

Store prices as they arrive
Remove outdated price if needed
Show the lowest and highest stock price at any moment
Operations:

ADD price
REMOVE price
MINMAX
📝 Input:

ADD 310
ADD 305
ADD 320
REMOVE 305
MINMAX
🟢 Expected Output:

305 removed
310 320
*/


#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	std::set<int> stockPrices;
	std::string command;
	int price;

	while (true) {
		cin >> command;

		if (command == "ADD") {
			cin >> price;
			stockPrices.insert(price);
		} 
		else if (command == "REMOVE") {
			cin >> price;
			auto it = stockPrices.find(price);
			if (it != stockPrices.end()) {
				stockPrices.erase(it);
				cout << price << " removed" << endl;
			}
			else {
				cout << price << " not found" << endl;
			}
		} 
		else if (command == "MINMAX") {
			if (!stockPrices.empty()) {
				cout << *stockPrices.begin() << " " << *stockPrices.rbegin() << endl;
			}
			else {
				cout << "No prices available" << endl;
			}
		}
	}
	return 0;
}









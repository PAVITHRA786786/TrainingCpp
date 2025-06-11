/*
Problem 1: Reverse Lookup
Given a list<string> of customer names in the order of registration, print them in reverse order using reverse iterators.

Sample Input : "Ravi", "Nina", "Amit"

Expected Output : Amit Nina Ravi
*/


#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> tasks = { "Ravi", "Nina", "Amit" };

    // Reverse iterator
    for (auto rit = tasks.rbegin(); rit != tasks.rend(); ++rit)
        cout << *rit << "  ";  
}

/*
Problem 3: Track Recent Items
Use a deque<string> to simulate recent items used in a program (most recent at the front). Use reverse_iterator to print history.

*/

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<string> tasks = { "item1","item2","item3","item4","item5"};

    // Reverse iterator
    for (auto rit = tasks.rbegin(); rit != tasks.rend(); ++rit)
        cout << *rit << "  ";
}

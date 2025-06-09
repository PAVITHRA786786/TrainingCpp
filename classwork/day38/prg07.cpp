#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> usernames;

    // Insert elements
    usernames.insert("alice");
    usernames.insert("bob");
    usernames.insert("charlie");
    usernames.insert("alice"); // duplicate, will be ignored

    std::cout << "Registered usernames:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }

    // Find a username
    std::string search_name = "bob";
    if (usernames.find(search_name) != usernames.end()) {
        std::cout << search_name << " is already registered.\n";
    }

    // Erase a username
    usernames.erase("charlie");

    std::cout << "Usernames after deletion:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }

    // Show size
    std::cout << "Total users: " << usernames.size() << "\n";

    auto lb = usernames.lower_bound("bob"); // >= "bob"
    std::cout << "\nLower bound of 'bob': " << (lb != usernames.end() ? *lb : "None") << "\n";
    std::cout << *lb << std::endl;

    auto ub = usernames.upper_bound("bob"); // > "bob"
    std::cout << "Upper bound of 'bob': " << (ub != usernames.end() ? *ub : "None") << "\n";
    std::cout << *ub << std::endl;


    return 0;
}



















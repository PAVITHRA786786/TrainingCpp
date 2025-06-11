#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> studentMap;

    // Insertion using insert() and []
    studentMap[101] = "Alice";
    studentMap[102] = "Bob";
    studentMap.insert({ 103, "Charlie" });

    // Update using operator[]
    studentMap[102] = "Bobby";

    // Traversing using iterator
    std::cout << "Student List:\n";
    for (std::map<int, std::string>::iterator it = studentMap.begin(); it != studentMap.end(); ++it) {
        std::cout << "Roll: " << it->first << ", Name: " << it->second << "\n";
    }

    // Searching
    int roll_to_search = 103;
    std::map<int, std::string>::iterator searchIt = studentMap.find(roll_to_search);
    if (searchIt != studentMap.end()) {
        std::cout << "Found: " << searchIt->first << " -> " << searchIt->second << "\n";
    }

    // Erasing by key
    studentMap.erase(101);

    std::cout << "\nAfter deletion:\n";
    for (auto& p : studentMap) {
        std::cout << p.first << " => " << p.second << "\n";
    }

    return 0;
}
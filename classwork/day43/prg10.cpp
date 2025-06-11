#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> courseSet;

    // Inserting unique course codes
    courseSet.insert("CS101");
    courseSet.insert("MA102");
    courseSet.insert("PH103");
    courseSet.insert("CS101");  // Duplicate, will be ignored

    // Display using iterator
    std::cout << "Registered Unique Course Codes:\n";
    for (auto it = courseSet.begin(); it != courseSet.end(); ++it) {
        std::cout << *it << "\n";
    }

    // Search for a course
    std::string searchCode = "MA102";
    if (courseSet.find(searchCode) != courseSet.end()) {
        std::cout << searchCode << " is registered.\n";
    }

    // Erase a course
    courseSet.erase("PH103");

    std::cout << "\nAfter deletion:\n";
    for (const auto& code : courseSet) {
        std::cout << code << "\n";
    }

    return 0;
}
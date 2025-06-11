#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> booksByAuthor;

    // Inserting books (duplicates allowed for keys)
    booksByAuthor.insert({ "Dan Brown", "Inferno" });
    booksByAuthor.insert({ "Dan Brown", "The Da Vinci Code" });
    booksByAuthor.insert({ "J.K. Rowling", "Harry Potter" });
    booksByAuthor.insert({ "J.R.R. Tolkien", "The Hobbit" });

    // Display all entries
    std::cout << "Library Books:\n";
    for (std::multimap<std::string, std::string>::iterator it = booksByAuthor.begin(); it != booksByAuthor.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    // Finding all books by "Dan Brown"
    std::string author = "Dan Brown";
    std::cout << "\nBooks by " << author << ":\n";
    auto range = booksByAuthor.equal_range(author);
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << "\n";
    }

    return 0;
}
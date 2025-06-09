/*
Problem 4: Sliding Window Logging System (Using std::forward_list)
Objective: Maintain the latest N log entries in a lightweight memory-efficient system. When new logs exceed the size N, remove the oldest (i.e., tail node).

Requirements:

Use std::forward_list<std::string>.
Support log insertion at the front.
Keep a maximum of N logs in the list.
Display logs in the order most recent to oldest.
Challenge: Since forward_list doesn't support size tracking, implement custom logic to keep count and remove the last node when limit is exceeded.

Challenge Level: Advanced Focus Areas: Pointer manipulation, iterator chaining, singly-linked list handling.

*/


#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void Log(std::forward_list<std::string>&logs,const std::string& msg ,int max_logs) {
    logs.push_front(msg);
    auto it = logs.before_begin();
    int count = 0;
    for (auto next = logs.begin(); next != logs.end(); next++) {
        count++;
        if (count == max_logs) {
            logs.erase_after(it);
            break;
        }
        it++;
    }
}

int main() {
    std::forward_list<std::string> logs;
    int max_logs = 4;

    Log(logs, "LogA", max_logs);
    Log(logs, "LogB", max_logs);
    Log(logs, "LogC", max_logs);
    Log(logs, "LogD", max_logs);
    Log(logs, "LogE", max_logs);

    for (const auto& log : logs)
        std::cout << log << "\n";

    return 0;
}






















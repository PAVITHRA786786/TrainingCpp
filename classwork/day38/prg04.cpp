/*
Task Reordering System (Using std::list)
Objective: Implement a task manager where tasks can be:

Added to the end.
Promoted to the front if marked “Urgent”.
Removed by name.
Requirements:

Use std::list<std::string>.

Support the following commands:

add <task> – adds a task to the end.
urgent <task> – adds a task to the front.
remove <task> – removes a task by name.
show – displays the current task list.
Bonus: Implement a priority system that automatically promotes tasks containing the word "critical".

Challenge Level: Advanced Focus Areas: List traversal, insert, erase, find, and command parsing.

*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    std::list<std::string> task = { "PrepareReport","SubmitExpense" };
    auto it = std::find(task.begin(), task.end(), "PrepareReport");
    task.insert(it, "ClientCall");
    task.push_front("criticalDeployment");
    task.push_back( "FixBug");

    std::cout << "Task List:\n";
    for (const auto& task1 : task)
        std::cout << " -> " << task1;
   std:: cout <<std::endl;

    task.remove("SubmitExpense");
    std::cout << "Updated Task List: "<<std::endl;
    for (const auto& task1 : task)
        std::cout << " -> " << task1;
    std::cout << std::endl;

    return 0;
}
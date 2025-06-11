/*
3. Task Priority Scheduler (Priority Queue)
Problem: You need to schedule tasks based on their priority. Each task has a string description and a priority integer. Process tasks starting with the highest priority first.

Input: A list of tasks with descriptions and priority values.

Output: Print tasks in order of execution.
FixBug 5
ImplementFeature 8
CodeReview 3
Deploy 8
Expected Output:
Execute: ImplementFeature with priority 8
Execute: Deploy with priority 8
Execute: FixBug with priority 5
Execute: CodeReview with priority 3

*/

#include<iostream>
#include<queue>
#include<vector>
#include<string>

using namespace std;

class Tasks
{
	string name;
	int priority;
public:
	Tasks(string name,int priority):name(name),priority(priority){}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void setPrio(int priority) { this->priority = priority; }
	int getPrio() { return priority; }
	void display() { cout << "Execute: " << name << " with priority " << priority << endl; }
	bool operator<(const Tasks& other) const {
		return priority < other.priority;
	}
};
int main()
{
	priority_queue<Tasks> t;
	t.push({ "FixBug", 5 });
	t.push({ "ImplementFeature ",8 });
	t.push({ "CodeReview", 3 });
	t.push({ "Deploy", 8 });
	while (!t.empty()) {
		Tasks ta = t.top();
		ta.display();
	    t.pop();
	}

	return 0;
}
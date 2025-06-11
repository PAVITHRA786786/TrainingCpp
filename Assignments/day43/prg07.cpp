/*
2. Print Job Scheduling (Queue)
Problem: You have a queue of print jobs. Each job has a user name and a number of pages. Print jobs are processed in order, but if a job exceeds 10 pages, it should be split into chunks of 10 pages and processed as multiple jobs.

Input: A list of print jobs in the format: <username> <pages>

Output: Print the order in which jobs are processed, showing the user and pages printed per chunk.


Sample Input:
Alice 15
Bob 8
Charlie 23
Expected Output:
Processing: Alice 10 pages
Processing: Alice 5 pages
Processing: Bob 8 pages
Processing: Charlie 10 pages
Processing: Charlie 10 pages
Processing: Charlie 3 pages


*/


#include<iostream>
#include<queue>
#include<string>
#include<vector>

using namespace std;

class Job
{
	string name;
	int pages;
public:
	Job(string name,int pages):name(name),pages(pages){}
	void setName(string name) { this->name = name; }
	string setName() { return name; }
	void setPages(int pages) { this->pages = pages; }
	int getPages() { return pages; }
	void display() { cout << "processing: " << name << " " << pages << "pages" << endl; }
	
};

int main()
{
	queue<Job> job;
	job.push({ "Alice", 15 });
	job.push({ "Bob", 8 });
	job.push({ "Charlie", 23 });
	while (!job.empty()) {
		Job j = job.front();
		job.pop();
		int pages = j.getPages();
		string name = j.setName();

		while (pages > 10) {
			j.setPages(10);
			j.display();
			pages -= 10;
			job.push(j);
		}
		if (pages > 0) {
			j.setPages(pages);
			j.display();
		}
	}
	
	return 0;
}











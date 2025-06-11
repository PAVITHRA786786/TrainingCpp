/*
5. Emergency Room Queue (Priority Queue with Custom Comparator)
Problem: Patients arrive at the emergency room. Each patient has a name, age, and severity score. Patients with higher severity are treated first. If severity is the same, older patients have higher priority.

Input: List of patients in format: <name> <age> <severity>

Output: Print patients in order of treatment.
Emergency Room Queue (Priority Queue with Custom Comparator)
Sample Input:
John 65 5
Alice 70 5
Bob 30 7
Eve 40 5
Expected Output:
Treating: Bob, Age: 30, Severity: 7
Treating: Alice, Age: 70, Severity: 5
Treating: John, Age: 65, Severity: 5
Treating: Eve, Age: 40, Severity: 5
*/

#include<iostream>
#include<queue>
#include<string>
#include<vector>

using namespace std;

class Patient
{
	string name;
	int age;
	int severity;
public:
	Patient(string name,int age,int severity):name(name),age(age),severity(severity){}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void setAge(int severity) { this->age = age; }
	int getAge() { return age; }
	void setSev(int severity) { this->severity = severity; }
	int getSev() { return severity; }
	void display() { cout << "Treating: " << name<<"\tAge: "<<age << "\tseverity:" << severity << endl; }
	bool operator<(const Patient& other) const {
		return severity < other.severity;
	}
};

int main()
{
	std::priority_queue<Patient> patient;

	patient.push({ "John", 65, 5 });
	patient.push({ "Alice",70, 5});
	patient.push({ "Bob", 30,7});
	patient.push({ "Eve ",40,5 });

	while (!patient.empty()) {
		Patient p = patient.top();
		p.display();
		patient.pop();
	}

	return 0;
}
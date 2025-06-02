/*

---

## ⚙️ **Project: JobChain – CPU Job Scheduling Simulator with Logging System**

### 🚀 **Assessment Problem Statement**

Build a **menu-driven CPU Job Scheduling Simulator** that loads a list of jobs from a file and executes them according to selected scheduling strategies such as FIFO (by Job ID) or Priority-based scheduling.

You must implement a **basic logging mechanism** that supports **log levels**:

* `INFO` – routine execution info
* `DEBUG` – internal computations like sort order
* `WARNING` – non-critical anomalies
* `ERROR` – critical issues (e.g., failed file reads)

---

### ✅ **Core Features**

#### 1. Job Definition

Each job contains:

* Job ID (unique)
* Execution Time (in milliseconds)
* Priority (1 to 5; 5 = highest)

```cpp
class Job {
	int jobID;
	int executionTime;
	int priority;
};
```

---

#### 2. File Handling

* Read job data from a text file: `jobs.txt`
* Write execution logs to a text file: `job_log.txt`

---

#### 3. Scheduling Algorithms

Allow users to choose between:

* FIFO (by Job ID)
* Priority-Based (higher priority first)

Use a **function pointer** to switch between strategies dynamically.

---

#### 4. Simulated Execution

* Use `std::this_thread::sleep_for(std::chrono::milliseconds)` to simulate each job's execution time.
* Track and display **total time taken**.

---

#### 5. Logging System

Implement a basic logger class supporting levels:

```cpp
enum LogLevel { INFO, DEBUG, WARNING, ERROR };
void log(LogLevel level, const std::string& message);
```

Sample usage:

```cpp
log(INFO, "Loaded 5 jobs from file.");
log(DEBUG, "Sorted jobs based on priority.");
log(ERROR, "File could not be opened.");
```

---

### 📄 Sample Input File: `jobs.txt`

```
1 100 2
2 150 3
3 120 1
4 180 5
5 130 4
```

Each line: `<JobID> <ExecutionTime> <Priority>`

---

### 💡 Sample CLI Interaction

```
==== JobChain Scheduler ====
1. Load jobs from file
2. Choose scheduling algorithm
   a. FIFO (Job ID)
   b. Priority-based
3. Execute jobs
4. Export log
5. Exit
> 1
[INFO] Successfully loaded 5 jobs.

> 2b
[INFO] Selected Priority Scheduling.

> 3
[DEBUG] Executing Job ID: 4 | Priority: 5
[DEBUG] Executing Job ID: 5 | Priority: 4
...
[INFO] All jobs executed in 680ms.

> 4
[INFO] Log saved to job_log.txt.
```

---

### 📄 Sample Output Log: `job_log.txt`

```
[INFO] JobChain Execution Log
----------------------------------------
[DEBUG] Sorting jobs by priority...
[DEBUG] Job 4 | Priority 5 | ExecTime 180ms
[DEBUG] Job 5 | Priority 4 | ExecTime 130ms
[DEBUG] Job 2 | Priority 3 | ExecTime 150ms
[DEBUG] Job 1 | Priority 2 | ExecTime 100ms
[DEBUG] Job 3 | Priority 1 | ExecTime 120ms
[INFO] All jobs completed successfully.
[INFO] Total simulated time: 680ms
```

---

### ✅ Evaluation Rubric (Total: 100 Points)

| Feature                                 | Points |
| --------------------------------------- | ------ |
| Correct parsing of job file             | 10     |
| Proper class and object usage           | 10     |
| Correct implementation of FIFO strategy | 10     |
| Correct implementation of priority sort | 10     |
| Dynamic selection via function pointer  | 10     |
| Simulation with `chrono`                | 10     |
| Logging with levels                     | 15     |
| Output to file                          | 10     |
| Error handling and validation           | 10     |
| CLI flow and usability                  | 5      |

---

### 🧠 Concepts Covered

* File I/O
* Classes and objects
* Sorting with `std::sort`
* Function pointers
* Logging system design
* Use of `chrono` for time simulation
* Menu-based CLI
* Use of `std::vector`

---

*/


#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<chrono>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };
class Logger {
protected:
	ofstream logFile;
public:
	Logger(const string& filename) {
		logFile.open(filename, ios::app);
		if (!logFile.is_open()) {
			cerr << "ERROR: Could not open log file." << endl;
		}
	}

	~Logger() {
		if (logFile.is_open()) {
			logFile.close();
		}
	}

	void log(LogLevel level, const string& message) {
		if (logFile.is_open()) {
			string levelStr;
			switch (level) {
			case INFO: levelStr = "[INFO]"; break;
			case DEBUG: levelStr = "[DEBUG]"; break;
			case WARNING: levelStr = "[WARNING]"; break;
			case ERROR: levelStr = "[ERROR]"; break;
			}
			logFile << levelStr << " " << message << endl;
		}
	}

	void log(const string& message) {
		log(INFO, message);
	}
	void logError(const string& message) {
		log(ERROR, message);
	}
	void logDebug(const string& message) {
		log(DEBUG, message);
	}
	void logWarning(const string& message) {
		log(WARNING, message);
	}

};

class Job {
protected:
	int jobID;
	int executionTime;
	int priority;
public:
	Job(int id, int time, int prio) : jobID(id), executionTime(time), priority(prio) {}

	int getJobID() const { return jobID; }
	int getExecutionTime() const { return executionTime; }
	int getPriority() const { return priority; }

	bool operator<(const Job& other) const {
		return jobID < other.jobID;
	}

	bool operator>(const Job& other) const {
		return priority > other.priority;
	}
	bool operator==(const Job& other) const {
		return jobID == other.jobID;
	}

};


class JobScheduler :public Job
{
protected:
	vector<Job> jobs;
	Logger logger;
public:
	JobScheduler(int jobID, int executionTime, int priority, const string& logFileName) : Job(jobID, executionTime, priority),
		logger(logFileName) {}
	void addJob(int id, int time, int prio) {
		Job job(id, time, prio);
		jobs.push_back(job);
		logger.log(INFO, "Added job ID: " + to_string(id));
	}

	void sortJobsByID() {
		logger.logDebug("Sorting jobs by Job ID.");
		sort(jobs.begin(), jobs.end());
	}

};
class JobFileReader {
protected:
	ifstream file;
	Logger logger;
public:

	JobFileReader(const string& filename, const string& logFileName) : logger(logFileName) {
		file.open(filename);
		if (!file.is_open()) {
			logger.logError("Failed to open file: " + filename);
			throw runtime_error("File not found or could not be opened.");
		}
		logger.log(INFO, "File opened successfully: " + filename);
	}
	vector<Job> readJobs() {
		vector<Job> jobs;
		int id, time, prio;

		while (file >> id >> time >> prio) {
			jobs.emplace_back(id, time, prio);
			logger.log(INFO, "Read job ID: " + to_string(id));
		}
		if (jobs.empty()) {
			logger.logWarning("No jobs found in the file.");
		}
		else {
			logger.log(INFO, "Total jobs read: " + to_string(jobs.size()));
		}
		return jobs;
	}
	virtual ~JobFileReader() {
		if (file.is_open()) {
			file.close();
			logger.log(INFO, "File closed.");
		}
	}

	void displayJobs(const vector<Job>& jobs) const {
		for (const auto& job : jobs) {
			cout << "Job ID: " << job.getJobID()
				<< ", Execution Time: " << job.getExecutionTime()
				<< "ms, Priority: " << job.getPriority() << endl;
		}
	}
};
int main()
{
	try {
		JobFileReader fileReader("jobs.txt", "job_log2.txt");
		
		cout << "Reading jobs from file" << endl;

		vector<Job> jobs = fileReader.readJobs();
		if (jobs.empty()) {
			cerr << "No jobs found in the file." << endl;
			return 1;
		}
		cout << "Loaded " << jobs.size() << " jobs from file." << endl;
		
		cout << "Loaded Jobs:" << endl;
		for (const auto& job : jobs) {
			cout << "Job ID: " << job.getJobID()
				<< ", Execution Time: " << job.getExecutionTime()
				<< "ms, Priority: " << job.getPriority() << endl;
		}

		fileReader.displayJobs(jobs);

		JobScheduler scheduler(1, 100, 3, "job_log2.txt");

		for (const auto& job : jobs) {
			scheduler.addJob(job);
		}

		scheduler.sortJobsByID();
		}
	
	catch (const exception& e) {
		cerr << "ERROR: " << e.what() << endl;
	}

	return 0;
}

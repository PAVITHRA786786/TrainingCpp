/*

---

## ⚙️ **Project: NetMon – Network Packet Monitoring Simulator with Alerting System**

### 🚀 **Assessment Problem Statement**

Develop a **menu-driven Network Packet Monitoring Simulator** that reads simulated packet traffic from a file, analyzes it based on protocol or packet size, and generates **alerts and logs** based on threshold breaches.

Implement a **logging system** with the following levels:

* `INFO` – routine packet monitoring messages
* `DEBUG` – detailed packet inspection info
* `WARNING` – packet with unusually high size
* `ERROR` – missing or malformed packet data

---

### ✅ **Core Features**

#### 1. Packet Definition

Each packet contains:

* Packet ID (unique)
* Protocol (`TCP`, `UDP`, `ICMP`)
* Packet Size (in bytes)

```cpp
class Packet {
	int packetID;
	std::string protocol;
	int size;
};
```

---

#### 2. File Handling

* Read packets from a file: `packets.txt`
* Write logs and alerts to: `netmon_log.txt`

---

#### 3. Analysis Options

Allow user to:

* Filter by protocol (`TCP`, `UDP`, `ICMP`)
* Detect large packets (>1000 bytes) and raise warnings

Use **function pointers** to switch between analysis modes dynamically.

---

#### 4. Alerting System

* Any packet > 1000 bytes triggers a `WARNING`
* Malformed lines trigger `ERROR`

---

#### 5. Logging System

```cpp
enum LogLevel { INFO, DEBUG, WARNING, ERROR };
void log(LogLevel level, const std::string& message);
```

---

### 📄 Sample Input File: `packets.txt`

```
1 TCP 450
2 UDP 980
3 ICMP 1050
4 TCP 200
5 FTP 300
```

---

### 💡 Sample CLI Interaction

```
==== NetMon Packet Monitor ====
1. Load packet data
2. Filter by protocol
3. Check for large packets
4. Export log
5. Exit
> 1
[INFO] Loaded 5 packets.

> 2 TCP
[DEBUG] Packet 1 | TCP | 450 bytes
[DEBUG] Packet 4 | TCP | 200 bytes

> 3
[WARNING] Packet 3 | ICMP | 1050 bytes

> 4
[INFO] Logs saved to netmon_log.txt.
```

---

### ✅ Evaluation Rubric

| Feature                           | Points |
| --------------------------------- | ------ |
| File parsing                      | 10     |
| Class usage                       | 10     |
| Filtering by protocol             | 10     |
| Warning on size threshold         | 10     |
| Function pointer usage            | 10     |
| Logger with levels                | 15     |
| Error handling for malformed data | 10     |
| Output to file                    | 10     |
| CLI interface                     | 5      |
| Total                             | 100    |

---


*/

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<chrono>


using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };
void log(LogLevel level, const string& message) {
	ofstream logFile("netmon_log.txt", ios::app);
	if (!logFile.is_open()) {
		cerr << "Error opening log file!" << endl;
		return;
	}

	time_t now = time(0);
	char* dt = ctime(&now);
	dt[strlen(dt) - 1] = '\0'; 

	switch (level) {
	case INFO:
		logFile << "[" << dt << "] [INFO] " << message << endl;
		break;
	case DEBUG:
		logFile << "[" << dt << "] [DEBUG] " << message << endl;
		break;
	case WARNING:
		logFile << "[" << dt << "] [WARNING] " << message << endl;
		break;
	case ERROR:
		logFile << "[" << dt << "] [ERROR] " << message << endl;
		break;
	}
	logFile.close();
}

template<typename T>
class packet {
protected:
	int packetID;
	char protocol[4];
	T size;
public:
	packet(int id, const char* proto, T sz) : packetID(id), size(sz) {
		strncpy(protocol, proto, sizeof(protocol) - 1);
		protocol[sizeof(protocol) - 1] = '\0';
	}

	int getPacketID() const 
	{
		return packetID;
	}
	const char* getProtocol() const {
		return protocol; 
	}
	T getSize() const { 
		return size;
	}

	virtual void display() const {
		cout << "Packet ID: " << packetID << ", Protocol: " << protocol << ", Size: " << size << " bytes" << endl;
	}
	virtual ~packet() = 0;

};

template<typename T>
class packetManager 
{
protected:
	vector<packet<T>*> packets;
public:
	void addPacket(packet<T>* p) {
		packets.push_back(p);
	}

	void displayPackets() const {
		for (const auto& p : packets) {
			p->display();
		}
	}

	void filterByProtocol(const string& proto) const {
		for (const auto& p : packets) {
			if (proto == p->getProtocol()) {
				p->display();
			}
		}
	}

	void checkLargePackets(int threshold) const {
		for (const auto& p : packets) {
			if (p->getSize() > threshold) {
				log(WARNING, "Packet " + to_string(p->getPacketID()) + " | " + p->getProtocol() + " | " 
					+ to_string(p->getSize()) + " bytes");
			}
		}
	}

	virtual ~packetManager() {
		for (auto& p : packets) {
			delete p;
		}
	}

};
template<typename T>
class packetFileReader {
protected:
	ifstream file;
public:
	packetFileReader(const string& filename) : file(filename) {
		if (!file.is_open()) {
			log(ERROR, "Failed to open file: " + string(filename));
			throw runtime_error("File not found or could not be opened.");
		}
	}
	void readPackets(packetManager<T>& manager) {
		string line;
		while (getline(file, line)) {
			int id;
			char proto[4];
			T size;

			packet<T>* p = new packet<T>(id, proto, size);
			manager.addPacket(p);
			log(INFO, "Packet " + to_string(id) + " loaded successfully.");
		}
		file.close();
	}

};

template<typename T>
class packetCLI {
protected:
	packetManager<T> manager;
	packetFileReader<T> fileReader;
public:
	packetCLI(const string& filename) : fileReader(filename) {}

	void loadPackets() {
		try {
			fileReader.readPackets(manager);
			log(INFO, "Loaded packets successfully.");
		}
		catch (const runtime_error& e) {
			cerr << e.what() << endl;
		}
	}

	void filterByProtocol(const string& proto) {
		manager.filterByProtocol(proto);
		log(DEBUG, "Filtered packets by protocol: " + proto);
	}

	void checkLargePackets(int threshold = 1000) {
		manager.checkLargePackets(threshold);
	}

	void displayPackets() const {
		manager.displayPackets();
	}
	void exportLogs() const {
		log(INFO, "Logs exported to netmon_log.txt.");
		cout << "Logs saved to netmon_log.txt." << endl;
	}

};

int main() {
	cout << " NetMon Packet Monitor " << endl;

	packetCLI<int> cli("packet.txt");
	int choice;

	while(true) {
		cout << "1. Load packet data" << endl;
		cout << "2. Filter by protocol" << endl;
		cout << "3. Check for large packets" << endl;
		cout << "4. Export log" << endl;
		cout << "5. Exit" << endl;
		cout << "> ";
		cin >> choice;

		switch (choice) {
		case 1:
			cli.loadPackets();
			break;
		case 2: {
			string proto;
			cout << "Enter protocol (TCP, UDP): ";
			cin >> proto;
			cli.filterByProtocol(proto);
			break;
		}
		case 3:
			cli.checkLargePackets();
			break;
		case 4:
			cli.exportLogs();
			break;
		case 5:
			cout << "Exit" << endl;
			break;
		default:
			cout << "Invalid choice." << endl;
		}
	} 

	return 0;
}

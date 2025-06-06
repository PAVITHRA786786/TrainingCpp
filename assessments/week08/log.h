#pragma once

#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>

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


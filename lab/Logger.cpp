#include "Logger.h"

Logger::Logger(const std::string& filename) {
    logFile.open(filename, std::ios::app);
    if (!logFile) {
        std::cerr << "Unable to open log file!" << std::endl;
    }
}
Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}
void Logger::logMessage(const std::string& message) {
    if (logFile.is_open()) {
        logFile << message << std::endl;
    }
}
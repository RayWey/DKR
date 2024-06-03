#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>


class Logger {
private:
    std::ofstream logFile;

public:
    // Конструктор
    Logger(const std::string& filename);

    // Деструктор
    ~Logger();

    // Метод для логування повідомлень
    void logMessage(const std::string& message);
};
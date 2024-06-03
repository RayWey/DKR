#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>


class Logger {
private:
    std::ofstream logFile;

public:
    // �����������
    Logger(const std::string& filename);

    // ����������
    ~Logger();

    // ����� ��� ��������� ����������
    void logMessage(const std::string& message);
};
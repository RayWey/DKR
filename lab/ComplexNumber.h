#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

class ComplexNumber {
private:
    double realNum;
    double imaginaryNum;

public:
    // ������������
    ComplexNumber() : realNum(0), imaginaryNum(0) {}
    ComplexNumber(double r, double i) : realNum(r), imaginaryNum(i) {}

    // ������� �� �������
    void setRealNum(double r);
    void setImaginaryNum(double i);
    double getRealNum() const;
    double getImaginaryNum() const;

    // ����� ���������� ������ ���� ���� ����������� �����
    double calculateModule(const ComplexNumber& other) const;

    // ����� ��� ��������� ��������� ������������� ��'����
    std::string toString() const;

    // �������������� ��������� <<
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);
};
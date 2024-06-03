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
    // Конструктори
    ComplexNumber() : realNum(0), imaginaryNum(0) {}
    ComplexNumber(double r, double i) : realNum(r), imaginaryNum(i) {}

    // Геттери та Сеттери
    void setRealNum(double r);
    void setImaginaryNum(double i);
    double getRealNum() const;
    double getImaginaryNum() const;

    // Метод обчислення модуля суми двох комплексних чисел
    double calculateModule(const ComplexNumber& other) const;

    // Метод для отримання рядкового представлення об'єкта
    std::string toString() const;

    // Перевантаження оператора <<
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);
};
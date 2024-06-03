#include "ComplexNumber.h"

void ComplexNumber::setRealNum(double r) { realNum = r; }
void ComplexNumber::setImaginaryNum(double i) { imaginaryNum = i; }
double ComplexNumber::getRealNum() const { return realNum; }
double ComplexNumber::getImaginaryNum() const { return imaginaryNum; }
double ComplexNumber::calculateModule(const ComplexNumber& other) const {
    double sumReal = realNum + other.getRealNum();
    double sumImaginary = imaginaryNum + other.getImaginaryNum();
    return std::sqrt(sumReal * sumReal + sumImaginary * sumImaginary);
}
std::string ComplexNumber::toString() const {
    return std::to_string(realNum) + " + " + std::to_string(imaginaryNum) + "i";
}
std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn) {
    os << cn.realNum << " + " << cn.imaginaryNum << "i";
    return os;
}


#include "ComplexNumber.h"
#include "Logger.h"

// ������� ��� ���������� �����
std::string encrypt(const std::string& data, char key) {
    std::string encrypted = data;
    for (size_t i = 0; i < data.size(); ++i) {
        encrypted[i] = data[i] ^ key;
    }
    return encrypted;
} 

// ������� ��������
int main() {
    // ��������� ��'���� ����������� �����
    ComplexNumber complexNumber1(1, 3);
    ComplexNumber complexNumber2 = ComplexNumber();
    complexNumber2.setRealNum(-1);
    complexNumber2.setImaginaryNum(2);

    // ���������� ������ ����
    double moduleOfNums = complexNumber1.calculateModule(complexNumber2);

    // ��������� ����������
    std::cout << "Complex Number 1: " << complexNumber1 << std::endl;
    std::cout << "Complex Number 2: " << complexNumber2 << std::endl;
    std::cout << "Modulus of their sum: " << moduleOfNums << std::endl;

    // ��������� ����������
    Logger logsFile("logs.txt");
    logsFile.logMessage("Complex Number 1: " + complexNumber1.toString());
    logsFile.logMessage("Complex Number 2: " + complexNumber2.toString());
    logsFile.logMessage("Modulus of their sum: " + std::to_string(moduleOfNums));

    // ���������� ����� � ���� � �����������
    std::ofstream outFile("encryptedData.txt");
    if (outFile) {
        char encryptKey = 'K';
        for (std::string i : {complexNumber1.toString(), complexNumber2.toString(), std::to_string(moduleOfNums)}) {
            std::string data = i + "\n";
            std::string encryptedData = encrypt(data, encryptKey);
            outFile << encryptedData;
        }
        outFile.close();
    }
    else {
        std::cerr << "Unable to open data file!" << std::endl;
    }

    return 0;
}
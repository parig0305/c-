#include <iostream>
#include <bitset>

int main() {
    // Convert decimal to binary
    int decimalNumber = 25;
    std::bitset<8> binaryRepresentation(decimalNumber);
    
    std::cout << "Decimal: " << decimalNumber << std::endl;
    std::cout << "Binary: " << binaryRepresentation << std::endl;

    // Convert binary to decimal
    std::string binaryString = "101011";
    int decimalResult = std::bitset<8>(binaryString).to_ulong();

    std::cout << "Binary: " << binaryString << std::endl;
    std::cout << "Decimal: " << decimalResult << std::endl;

    // Basic binary operations
    int a = 0b1010;  // Binary literal (C++14 and later)
    int b = 0b1100;

    int resultAnd = a & b;
    int resultOr = a | b;
    int resultXor = a ^ b;

    std::cout << "Binary AND: " << std::bitset<4>(resultAnd) << std::endl;
    std::cout << "Binary OR:  " << std::bitset<4>(resultOr) << std::endl;
    std::cout << "Binary XOR: " << std::bitset<4>(resultXor) << std::endl;

    // Shifting operations
    int leftShift = a << 1;
    int rightShift = a >> 1;

    std::cout << "Left Shift:  " << std::bitset<4>(leftShift) << std::endl;
    std::cout << "Right Shift: " << std::bitset<4>(rightShift) << std::endl;

    return 0;
}

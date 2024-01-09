#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    // Standard Output
    std::cout << "Enter your name: ";

    // Standard Input
    std::string name;
    std::cin >> name;

    // Output using cout with manipulators
    std::cout << std::setw(20) << std::left << "Hello," << name << "!" << std::endl;

    // File Output
    std::ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Name: " << name << std::endl;
        outFile.close();
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }

    // File Input
    std::ifstream inFile("output.txt");
    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
    }

    return 0;
}

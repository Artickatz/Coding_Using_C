#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("textfile.txt");
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string searchStr;
    std::cout << "Enter the string to search: ";
    std::getline(std::cin, searchStr);

    std::string line;
    int lineNumber = 0;

    while (std::getline(inputFile, line)) {
        lineNumber++;
        if (line.find(searchStr) != std::string::npos) {
            std::cout << "String found in line " << lineNumber << ": " << line << std::endl;
        }
    }

    inputFile.close();
    return 0;
}

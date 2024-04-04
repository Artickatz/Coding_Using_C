# Task: Given a string in c++ reverse the string using an array string is "capitol" 

#include <iostream>
#include <cstring>

int main() {
    // Given string
    char str[] = "capitol";

    // Calculate the length of the string
    int length = strlen(str);

    // Reverse the string using an array
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Display the reversed string
    std::cout << "Reversed String: " << str << std::endl;

    return 0;
}

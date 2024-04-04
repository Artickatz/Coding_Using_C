#include <iostream>
using namespace std;

int main() {
    double num1, num2, temp;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swapping the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}

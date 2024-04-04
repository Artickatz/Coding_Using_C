#include <iostream>
using namespace std;

int main() {
    double kilometersPerHour, milesPerHour;

    cout << "Enter speed in kilometers per hour: ";
    cin >> kilometersPerHour;

    milesPerHour = kilometersPerHour * 0.621371;

    cout << "Speed in miles per hour: " << milesPerHour << endl;

    return 0;
}

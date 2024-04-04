#include <iostream>
using namespace std;

int main() {
    double side, volume;

    cout << "Enter the side length of the cube: ";
    cin >> side;

    volume = side * side * side;

    cout << "Volume of the cube: " << volume << endl;

    return 0;
}

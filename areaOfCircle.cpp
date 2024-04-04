#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

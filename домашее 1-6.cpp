#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double side;
    
    
    cout << "Enter the length of one side of the equilateral triangle: ";
    cin >> side;

    double area = (sqrt(3) / 4) * side * side;

    cout << "The area of the equilateral triangle is: " << area << endl;

    return 0;
}
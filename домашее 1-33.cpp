#include <iostream>
#include <cmath>

int main() {
    double a; 
    double area; 
  
    std::cout << "Enter the length of the side of the equilateral triangle: ";
    std::cin >> a; 
    area = (sqrt(3) / 4) * pow(a, 2);
    std::cout << "The area of the equilateral triangle is: " << area << std::endl;

    return 0;
}
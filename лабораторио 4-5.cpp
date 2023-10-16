#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    int sum = 0;
    int originalNumber = number;

    while (number != 0) {
        int digit = number % 10; 
        sum += digit; 
        number /= 10;
    }

    std::cout << "Sum of digits of a number" << originalNumber << " equal to " << sum << std::endl;

    return 0;
}


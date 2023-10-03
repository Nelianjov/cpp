#include <iostream>

int main() {
    int operation;
    double operand1, operand2;

    // Enter the operation sign (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division)
    std::cout << "Enter the operation sign (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division): ";
    std::cin >> operation;

    // Enter operands
    std::cout << "Enter the first operand: ";
    std::cin >> operand1;
    std::cout << "Enter second operand: ";
    std::cin >> operand2;

    double result;

    // Performing an operation depending on the selected operation sign
    switch (operation) {
        case 1:
            result = operand1 + operand2;
            break;
        case 2:
            result = operand1 - operand2;
            break;
        case 3:
            result = operand1 * operand2;
            break;
        case 4:
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                std::cout << "Division by zero is not allowed." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Invalid operation sign." << std::endl;
            return 1;
    }

    // Output of the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}









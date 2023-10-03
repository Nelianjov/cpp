#include <iostream>

int main() {
    int colorNumber;

    // Enter the color number in the rainbow (from 1 to 7)
    std::cout << "Enter the color number in the rainbow (from 1 to 7): ";
    std::cin >> colorNumber;

    std::string colorName;

    // Determining the name of a color by its number
    switch (colorNumber) {
        case 1:
            colorName = "Red";
            break;
        case 2:
            colorName = "Orange";
            break;
        case 3:
            colorName = "Yellow";
            break;
        case 4:
            colorName = "Green";
            break;
        case 5:
            colorName = "Blue";
            break;
        case 6:
            colorName = "Navy blue";
            break;
        case 7:
            colorName = "Violet";
            break;
        default:
            std::cout << "Invalid color number." << std::endl;
            return 1;
    }

    // Вывод названия цвета
    std::cout << "Color with number" << colorNumber << " in the rainbow: " << colorName << std::endl;

    return 0;
}
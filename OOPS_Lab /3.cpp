#include <iostream>

int main() {
    char choice;

    do {
        double num1, num2, result;
        char operation;

        // Input the first number
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        // Input the operator (+, -, *, /)
        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> operation;

        // Input the second number
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        // Perform the calculation based on the operator
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                    return 1; // Exit with an error code
                }
                break;
            default:
                std::cout << "Invalid operator!" << std::endl;
                return 1; // Exit with an error code
        }

        // Display the result
        std::cout << "Result: " << result << std::endl;

        // Ask if the user wants to do another calculation
        std::cout << "Do another calculation? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

#include <iostream>
#include <cmath>
#include <string>
// Function to calculate n^p with a default argument of 2 for p
double power(double n, int p = 2)
{
    return std::pow(n, p);
}
int main()
{
    double n;
    int p;
    std::string input;
    // Get input values from the user
    std::cout << "Enter a number (n): ";
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::cout << "Enter a power (p, or press Enter for default): ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        p = 2;
    }
    else
    {
        p = std::stoi(input);
    }
    // Calculate and print the result
    double result = power(n, p);
    std::cout << n << " raised to the power " << p << " is: " << result << std::endl;
    return 0;
}





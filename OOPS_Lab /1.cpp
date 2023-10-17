#include <iostream>
#include <cmath>

// Function to calculate n^p with a default argument of 2 for p
double power(double n, int p = 2)
{
    return std::pow(n, p);
}

int main()
{
    double n;
    int p;

    // Get input values from the user
    std::cout << "Enter a number (n): ";
    std::cin >> n;
    std::cout << "Enter a power (p): ";
    std::cin >> p;

    // Calculate and print the result
    double result = power(n, p);
    std::cout << n << " raised to the power " << p << " is: " << result << std::endl;

    return 0;
}

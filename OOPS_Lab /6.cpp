// In C++, streams are used to perform input and output operations. They are part of the Standard
// Input/Output Library and are represented by objects of stream classes. There are two primary stream
// classes in C++: istream and ostream. Here's a brief explanation of each:
// 1. istream:
//     istream is a base class for input streams. It's used for reading data from various sources, such
//     as the keyboard, files, or other devices.
//     cin is an instance of istream that is typically used to read input from the keyboard. For example,
//     you can use cin to read user input with std::cin >> variable;.
// 2. ostream:
//     ostream is a base class for output streams. It's used for writing data to various destinations,
//     such as the console, files, or other devices.
//     cout is an instance of ostream that is commonly used to print output to the console. For example,
//     you can use cout to display information with std::cout << "Hello, World!";.
// These classes are part of the C++ Standard Library and provide a way to perform input and output
// operations in a standardized and platform-independent manner. The <iostream> library is commonly used
// to include the necessary functionality for input and output operations in C++ programs.

#include <iostream>

using namespace std;
class Rational
{
private:
    double numerator;
    double denominator;

public:
    // Constructors
    Rational() : numerator(0.0), denominator(1.0) {} // Default constructor
    Rational(double num, double denom) : numerator(num), denominator(denom) {} // Parametrised Constructor

    // Overload + operator to add two rational numbers
    Rational operator+(const Rational &other) const
    {
        double resultNum = (numerator * other.denominator) + (other.numerator * denominator);
        double resultDenom = denominator * other.denominator;
        return Rational(resultNum, resultDenom);
    }

    // Reduce the rational number by eliminating the highest common factor
    void Reduce()
    {
        double gcd = GCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Overload >> operator to enable input
    friend istream &operator>>(istream &in, Rational &rational)
    {
        in >> rational.numerator >> rational.denominator;
        return in;
    }

    // Overload << operator to enable output
    friend ostream &operator<<(ostream &out, const Rational &rational)
    {
        out << rational.numerator << "/" << rational.denominator;
        return out;
    }

private:
    // Helper function to find the greatest common divisor (GCD)
    double GCD(double a, double b)
    {
        if (b == 0)
        {
            return a;
        }
        return GCD(b, fmod(a, b)); // Use fmod for floating-point numbers
    }
};

int main()
{
    Rational r1, r2, result;

    cout << "Enter two rational numbers in the format 'numerator denominator': ";
    cin >> r1 >> r2;

    result = r1 + r2;
    result.Reduce();

    cout << "Result: " << result << endl;

    return 0;
}

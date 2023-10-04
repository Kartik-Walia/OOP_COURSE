#include <iostream>
using namespace std;
class Complex
{
private:
    double real, imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Member function to add 2 complex numbers
    Complex add(const Complex &other)
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Friend function to add 2 complex numbers
    friend Complex addComplex(const Complex &c1, const Complex &c2);

    // Friend class to add 2 complex numbers
    friend class ComplexCalculator;
    // Getter functions to access private members
    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }
};

// Friend function definition
Complex addComplex(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

// Friend class to add 2 complex numbers
class ComplexCalculator
{
public:
    static Complex add(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }
};

int main()
{
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    // Using Friend Function
    Complex sum2 = addComplex(num1, num2);
    cout << "Sum using friend function: " << sum2.getReal() << " + " << sum2.getImaginary() << "i" << endl;

    // Using member function
    Complex sum1 = num1.add(num2);
    cout << "Sum using member function: " << sum1.getReal() << " + " << sum2.getImaginary() << "i" << endl;

    // Using friend class
    Complex sum3 = ComplexCalculator::add(num1, num2);
    cout << "Sum using friend class: " << sum3.getReal() << " + " << sum3.getImaginary() << "i" << endl;

    return 0;
}
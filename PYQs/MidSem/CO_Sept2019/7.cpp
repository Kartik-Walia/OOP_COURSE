#include <iostream>

using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator+(const Complex &x) const
    {
        return Complex(this->real + x.real, this->img + x.img);
    }
    void print() const
    {
        cout << this->real << " + i" << this->img << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(7, 6);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}
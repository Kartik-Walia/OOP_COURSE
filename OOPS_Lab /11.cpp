#include <iostream>
using namespace std;
class Complex{
private:
    int real;
    int imaginary;
public:
    Complex() : real(0), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}
    void input(){
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }
    Complex operator+(const Complex &other){
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
    void display(){
        cout << "Sum: " << real << " + " << imaginary << "i" << endl;
    }
};
int main(){
    Complex c1, c2, sum;
    cout << "Enter the first complex number:" << endl;
    c1.input();
    cout << "Enter the second complex number:" << endl;
    c2.input();
    sum = c1 + c2;
    c1.display();
    c2.display();
    sum.display();
    return 0;
}


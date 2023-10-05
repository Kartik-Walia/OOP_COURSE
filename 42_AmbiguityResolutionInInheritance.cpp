#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
// Method to resolve ambiguity (using scope resolution operator)
public:
    void greet()
    {
        Base2 ::greet();    // It shopuld use greet() of class Base2
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    // Ambiguity resolved all by itself
    // If we write a function with same name as base class, then it gets overwritten by derived class
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    // // Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet(); // greet() is declared in both classes Base1 & Base2 (which one to inherit)

    // Ambibuity 2
    B b;
    b.say();
    D d;
    d.say();    // class D overwrites say() function of class B

    return 0;
}

#include <iostream>

class MyClass
{
private:
    static int count;

public:
    MyClass() { count++; }
    ~MyClass() { count--; }
    static int getNumberOfInstances()
    {
        return count;
    }
};
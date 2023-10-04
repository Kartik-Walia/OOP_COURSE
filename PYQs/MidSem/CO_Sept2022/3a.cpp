#include <iostream>

class TEST
{
public:
    int x, y;
    TEST()
    {
        x = 0, y = 0;
        std::cout << "default called";
    }
    TEST(int a, int b)
    {
        x = a, y = b;
        std::cout << "parametrized constructor called";
    }
    TEST(TEST &obj1)
    {
        x = obj1.x;
        y = obj1.y;
        std::cout << "copy constructor called";
    }
};

int main()
{
    return 0;
}
/*
(i) default
(ii) Parametrized
(iii) Copy
(iv) Copy
(v) equivalent operator
(vi) error
*/

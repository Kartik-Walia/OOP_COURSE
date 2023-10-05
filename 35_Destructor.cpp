#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;  // Made count a global variable

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    // Creating block (Elements declared inside, have scope inside block only)
    // When block exits, all objects created inside it gets destroyed
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    // When compiler gets to know object is not needed now, then it calls destructor
    return 0;
}

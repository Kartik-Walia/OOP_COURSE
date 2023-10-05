#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}    // Needed this bcoz when nothing is passed a cu=onstructor be run 
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14 (in %)
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;  // Won't work if empty constructor isn't declared
    /*
    When we make constructors, then while making an object the program looks for calling some 
    constructor, but if we don't declare an empty, then it won't be able to match any of the 
    multiple constructors, so will throw an error!
    */
    int p, y;
    float r;    // decimal form
    int R;  // percentage form

    bd3.show();
    cout << "Enter the value of p y and r (decimal) " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R (percentage) " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}

#include <iostream>

using namespace std;
class DB; // Forward declaration for the friend function

class DM
{
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    // Friend function to add a DM object to a DB object
    friend DM operator+(const DM &dm, const DB &db);

    void display()
    {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }
};

class DB
{
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    // Friend function to add a DM object to a DB object
    friend DM operator+(const DM &dm, const DB &db);

    void display()
    {
        cout << feet << " feet and " << inches << " inches" << endl;
    }
};

// Friend function to add a DM object to a DB object
DM operator+(const DM &dm, const DB &db)
{
    int totalCentimeters = (dm.meters * 100 + dm.centimeters) + (db.feet * 30.48 + db.inches * 2.54);
    int newMeters = totalCentimeters / 100;
    int newCentimeters = totalCentimeters % 100;
    return DM(newMeters, newCentimeters);
}

int main()
{
    DM dm1(2, 50); // 2 meters and 50 centimeters
    DB db1(3, 6);  // 3 feet and 6 inches

    DM result = dm1 + db1;

    cout << "Result in ";
    result.display();

    return 0;
}

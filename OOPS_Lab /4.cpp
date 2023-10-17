#include <iostream>

class Phone
{
public:
    int areaCode;
    int exchange;
    int number;

    // Constructor to initialize the phone number parts
    Phone(int a, int e, int n) : areaCode(a), exchange(e), number(n) {}

    // Default constructor
    Phone() : areaCode(0), exchange(0), number(0) {}
};

int main()
{
    // Initialize one phone number using the constructor
    Phone phone1(212, 767, 8900);

    // Create another phone object
    Phone phone2;

    // Input a phone number from the user
    std::cout << "Enter a phone number (format: (area code) exchange-number): ";
    char openParen, closeParen, hyphen;
    std::cin >> openParen >> phone2.areaCode >> closeParen >> phone2.exchange >> hyphen >> phone2.number;

    // Display both phone numbers
    std::cout << "Phone 1: (" << phone1.areaCode << ") " << phone1.exchange << "-" << phone1.number << std::endl;
    std::cout << "Phone 2: (" << phone2.areaCode << ") " << phone2.exchange << "-" << phone2.number << std::endl;

    return 0;
}

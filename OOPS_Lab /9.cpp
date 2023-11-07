#include <iostream>
using namespace std;
class TollBooth{
private:
    unsigned int totalCars;
    double totalAmount;
public:
    TollBooth() : totalCars(0), totalAmount(0.0) {}
    void payingCar(){
        totalCars++;
        totalAmount += 0.50;
    }
    void nonPayCar(){
        totalCars++;
    }
    void display(){
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Amount Collected: $" << totalAmount << endl;
    }
};
int main(){
    TollBooth tollbooth;
    char key;
    cout << "Press 'P' to count a paying car, 'N' to count a nonpaying car, or 'ESC' to exit." << endl;
    do{
        key = cin.get();
        cin.ignore(); // Clear the newline character from the input buffer
        switch (key){
        case 'P':
        case 'p':
            tollbooth.payingCar();
            cout << "Paying car counted." << endl;
            break;
        case 'N':
        case 'n':
            tollbooth.nonPayCar();
            cout << "Nonpaying car counted." << endl;
            break;
        case 27: // 27 is the ASCII code for ESC key
            break;
        default:
            cout << "Invalid key. Press 'P', 'N', or 'ESC'." << endl;
        }
    } while (key != 27);
    cout << "Exiting..." << endl;
    tollbooth.display();
    return 0;
}


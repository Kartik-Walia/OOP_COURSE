#include <iostream>
using namespace std;
class Cont{
private:
    static int cnt;
public:
    Cont(){
        cnt++;
    }
    ~Cont(){
        cnt--;
    }
    static void showcnt(){
        cout << "Number of active objects: " << cnt << endl;
    }
};
int Cont::cnt = 0; // Initialize the static member
int main(){
    Cont obj1, obj2, obj3;
    Cont::showcnt(); // Display the count
    {
        Cont obj4;
        Cont::showcnt(); // Display the count within a block
    }
    Cont::showcnt(); // Display the count after block
    return 0;
}



#include<iostream>

class ObjectTracker{
    private:
    static int Created, Destroyed, Active;
    public:
    ObjectTracker() {
        Created++;
        Active++;
    }
    ~ObjectTracker() {
        Destroyed++;
        Active--;
    }
    static int getCreated() {
        return Created;
    }
    static int getDestroyed() {
        return Destroyed;
    }
    static int getActive() {
        return Active;
    }
};

int ObjectTracker::Created = 0;
int ObjectTracker::Destroyed = 0;
int ObjectTracker::Active = 0;

int main(){
    ObjectTracker obj1, obj2;
    using namespace std;    // To remove std:: before cout
    cout << "Created: " << ObjectTracker::getCreated() << endl;
    cout << "Destroyed: " << ObjectTracker::getDestroyed() << endl;
    cout << "Active: " << ObjectTracker::getActive() << endl;

    {
        ObjectTracker obj3;     // This obj gets destroyed as we move out of this {}
        cout << "Active (inner scope): " << ObjectTracker::getActive() << endl;
    }

    cout << "Destroyed (after inner scope): " << ObjectTracker::getDestroyed() << endl;
    cout << "Active (after inner scope): " << ObjectTracker::getActive() << endl;

    return 0;
}
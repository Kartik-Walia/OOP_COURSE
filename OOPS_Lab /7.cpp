#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student
{
    unsigned int roll_no;
    char name[31];
    float marks;
};
int main()
{
    ofstream outFile("student_data.dat", std::ios::binary);
    if (!outFile){
        cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }
    Student student;
    char moreData = 'y';
    while (moreData == 'y' || moreData == 'Y'){
        cout << "Enter Roll Number: ";
        cin >> student.roll_no;
        cin.ignore(); // Clear newline character from the input buffer
        cout << "Enter Name (30 or fewer characters): ";
        cin.getline(student.name, sizeof(student.name));
        cout << "Enter Marks: ";
        cin >> student.marks;
        // Write the student data to the binary file
        outFile.write(reinterpret_cast<char *>(&student), sizeof(Student));
        cout << "Do you want to enter more student data? (y/n): ";
        cin >> moreData;
        cin.ignore(); // Clear newline character from the input buffer
    }
    outFile.close();
    cout << "Student data has been written to student_data.dat" << endl;
    return 0;
}

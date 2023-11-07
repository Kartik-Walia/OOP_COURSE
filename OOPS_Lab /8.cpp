#include <iostream>
using namespace std;
class Employee{
private:
    char *name;
    double salary;
public:
    Employee(const char *empName, double empSalary){
        name = new char[strlen(empName) + 1];
        strcpy(name, empName);
        salary = empSalary;
    }
    ~Employee(){
        delete[] name;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};
class Manager : public Employee{
private:
    char *department;
public:
    Manager(const char *empName, double empSalary, const char *empDepartment)
        : Employee(empName, empSalary){
        department = new char[strlen(empDepartment) + 1];
        strcpy(department, empDepartment);
    }
    ~Manager(){
        delete[] department;
    }
    void display(){
        Employee::display();
        cout << "Department: " << department << endl;
    }
};
class Executive : public Manager{
public:
    Executive(const char *empName, double empSalary, const char *empDepartment)
        : Manager(empName, empSalary, empDepartment) {}
    void display(){
        cout << "Executive" << endl;
        Manager::display();
    }
};
int main(){
    Employee emp("John", 50000.0);
    emp.display();
    Manager manager("Alice", 60000.0, "Sales");
    manager.display();
    Executive executive("Bob", 80000.0, "Marketing");
    executive.display();
    return 0;
}


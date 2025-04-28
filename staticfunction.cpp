#include <iostream>
#include <string>
using namespace std;

// Forward declaration (if needed)
class HR;  

class Employee {
private:
    string name;
    int id;
    double salary;
    static int totalEmployees;

    // Friend declarations
    friend void HK_Department_UpdateSalary(Employee& emp, double newSalary);
    friend class HR;  // HR is a friend but does nothing

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {
        totalEmployees++;
    }

    void displayInfo() const {
        cout << "ID: " << id << ", Name: " << name 
             << ", Salary: " << salary << endl;
    }

    static int getTotalEmployees() {
        return totalEmployees;
    }
};

int Employee::totalEmployees = 0;

// Empty HR class (no members, no functions)
class HR { 
    // Nothing inside!
};

// Salary update is still done by the standalone function
void HK_Department_UpdateSalary(Employee& emp, double newSalary) {
    emp.salary = newSalary;
    cout << "Salary updated to " << newSalary 
         << " for " << emp.name << endl;
}

int main() {
    Employee emp1("John", 101, 40000);
    Employee emp2("Sarah", 102, 45000);

    cout << "Initial info:\n";
    emp1.displayInfo();
    emp2.displayInfo();

    // Update via HK Department (HR does nothing)
    HK_Department_UpdateSalary(emp1, 42000);
    HK_Department_UpdateSalary(emp2, 48000);

    cout << "\nAfter updates:\n";
    emp1.displayInfo();
    emp2.displayInfo();

    return 0;
}
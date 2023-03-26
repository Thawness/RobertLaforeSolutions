#include <iostream>

using namespace std;

class Employee {
    private:
        int empNum;
        float empCompensation;

public:
    Employee():empNum(0), empCompensation(0) {  } // no-arg constructor to initialize default value

    void setData();
    void display() const;
    };

void Employee::setData() {
    cout << "Enter employee number: ";
    cin >> empNum;
    cout << "Enter employee compensation: ";
    cin >> empCompensation;
    cout << endl;
}

void Employee::display() const {
    cout << "Employee Number: " << empNum << endl;
    cout << "Employee Compensation: " << empCompensation << endl;
}

int main() {
    Employee emp1, emp2, emp3;

    emp1.setData();
    emp2.setData();
    emp3.setData();

    cout << "\nDetails of first employee: \n";
    emp1.display();
    cout << "\nDetails of second employee: \n";
    emp2.display();
    cout << "\nDetails of third employee: \n";
    emp3.display();

    cout << endl;
    return 0;
}

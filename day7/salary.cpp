#include <iostream>
#include <iomanip>
using namespace std;

class employe {
public:
    int id;
    string name;
    double salary;

    void getName() {
        cout << "Enter your name: ";
        cin >> name;
    }

    void getId() {
        cout << "Enter your id: ";
        cin >> id;
    }

    void getSalary() {
        cout << "Enter your salary in INR: ";
        cin >> salary;
    }

    void showSalary() {
        double totalSalary = salary * 1.01;
        totalSalary -= (0.10 * salary);

        cout << "Your name is: " << name << endl;
        cout << "Your id is: " << id << endl;
        cout << "Your salary before increment and deduction: ₹" << salary << endl;
        cout << "Your total salary with 1% increment and 10% deduction: ₹" << totalSalary << endl;
    }
};

int main() {
    employe emp;
    emp.getName();
    emp.getId();
    emp.getSalary();
    emp.showSalary();

    return 0;
}

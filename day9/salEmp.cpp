#include <iostream>
using namespace std;

class Salary {
private:
    int id;
    char name[100];

public:
    void get() {
        cout << "Enter Name and ID of Employee: ";
        cin >> name >> id;
    }

    void display() {
        cout << "Name: " << name << " ID: " << id << endl;
    }
};

class Employee : public Salary {
private:
    int Rsalary;

public:
    void getS() {
        cout << "Enter salary: "<<endl;
        cin >> Rsalary;
    }

    void displayS() {
        cout << "Salary: " << Rsalary << endl;
    }
};

int main() {
    Employee emp;
    emp.get();

    emp.getS();
    cout << "Displaying Employee Details\n";
    emp.display();
    emp.displayS();
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    virtual void displayInfo() const = 0;
};

class Student : public Person {
private:
    int studentID;

public:
    Student(const string& n, int id) : Person(n), studentID(id) {}

    void displayInfo() const override {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student student1("Alice", 12345);
    Student student2("Bob", 67890);

    student1.displayInfo();
    student2.displayInfo();

    return 0;
}

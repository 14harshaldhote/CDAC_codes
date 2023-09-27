//
#include<iostream>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    bool pass;

public:
    void get() {
        cout << "Enter rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

    bool isPass() {
        return pass;
    }

    void setPass(bool p) {
        pass = p;
    }
};

class Test : public Student {
private:
    int t1, t2, t3, t4;

public:
    void gett() {
        get();
        cout << "Enter t1: ";
        cin >> t1;
        cout << "Enter t2: ";
        cin >> t2;
        cout << "Enter t3: ";
        cin >> t3;
        t4 = t1 + t2 + t3;
    }

    void displayt() {
        display();
        cout << "t1: " << t1 << endl;
        cout << "t2: " << t2 << endl;
        cout << "t3: " << t3 << endl;
        cout << "Total test marks: " << t4 << endl;
        
        // Print the result directly
        if (t4 >= 100) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

class Sport {
private:
    int s1, s2, s3;

public:
    void gets() {
        cout << "Enter sports marks (3 subjects): ";
        cin >> s1 >> s2 >> s3;
    }

    int getTSM() {
        return s1 + s2 + s3;
    }
};

class Result : public Test {
private:
    Sport sports;

public:
    void getr() {
        gett();
        sports.gets();
    }

    void displayr() {
        displayt();
        cout << "Total sports marks: " << sports.getTSM() << endl;
    }
};

int main() {
    Result obj;
    obj.getr();
    obj.displayr();
    return 0;
}

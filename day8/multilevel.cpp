#include<iostream>
using namespace std;

class A {
protected:
    int a;

public:
    void give() {
        cout << "Please enter the number :" << endl;
        cin >> a;
    }
};

class B : protected A {
private:
    int x;

public:
    void square() {
        give();
        x = a * a;
        cout << "Square: " << x << endl;
    }
};

class C : protected B {
public:
    void cube() {
        square();
        int result = a * a * a;  
        cout << "Cube: " << result << endl;
    }
};

int main() {
    C c1;
    c1.cube();
    return 0;
}

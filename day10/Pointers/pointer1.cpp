#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    int** s = &p;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value pointed to by p: " << *p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value pointed to by s (which is the same as x): " << **s << endl;
    cout << "Address of s: " << &s << endl;

    return 0;
}

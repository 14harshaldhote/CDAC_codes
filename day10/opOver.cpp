#include<iostream>
using namespace std;

class CScript {
private:
    int b, a;
public:
    int c;

    CScript(int x, int y) {
        a = x;
        b = y;
        c = 0;
    }

    void operator --() {
        if (a > b) {
            a--;
        }
        else {
            b--;
        }
        c = a;
        cout << "a--: " << c << endl;
    }

    void operator ++() {
        c++;
        b++;
        cout << "c++: " << c << endl;
        cout << "b++: " << b << endl;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    CScript obj(num1, num2);

    --obj; 
    ++obj; 

    return 0;
}

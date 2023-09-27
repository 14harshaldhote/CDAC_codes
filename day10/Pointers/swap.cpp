#include<iostream>
using namespace std;

class Swap {
public:
    void swapValues(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
};

int main() {
    int num1 = 15;
    int num2 = 20;

    Swap s;

    cout << "Before swapping:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    s.swapValues(&num1, &num2);

    cout << "After swapping:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}

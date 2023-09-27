#include <iostream>
using namespace std;

void addByReference(int* a) {
    *a = (*a) * 2;
}

int main() {
    int num1 = 5;
    addByReference(&num1);
    cout << "num1: " << num1 << endl;
    return 0;
}

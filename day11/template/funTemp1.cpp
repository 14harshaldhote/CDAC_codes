//swap two number 
#include<iostream>

using namespace std;

template<class T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int i = 10, j = 60;
    
    cout << "Before swapping: i = " << i << ", j = " << j << endl;
    
    mySwap(i, j);
    
    cout << "After swapping: i = " << i << ", j = " << j << endl;

    return 0;
}

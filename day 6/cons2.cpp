#include<iostream>
using namespace std;

class ans {
private:
    int a, b;

public:
    ans(int x, int y) {
        a = x;
        b = y;
    }

    int calculateSum() {
        return a + b;
    }
};

int main() {
    int x = 20, y = 10;

    ans obj(x, y);

    int c = obj.calculateSum();

    cout << "Sum: " << c << endl;
    return 0;
}

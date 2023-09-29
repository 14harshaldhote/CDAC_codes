#include <iostream>
using namespace std;

class DTBC;

void decToBinary(DTBC obj);

class DTBC {
private:
    int decimalNum;

public:
    DTBC(int n) : decimalNum(n) {}

    friend void decToBinary(DTBC obj);

    void printBinary() {
        cout << "Binary representation: ";
        decToBinary(*this);
        cout << endl;
    }
};

void decToBinary(DTBC obj) {
    int n = obj.decimalNum;
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
}

int main() {
    int n = 17;
    DTBC converter(n);
    converter.printBinary();
    return 0;
}

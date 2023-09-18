#include <iostream>
using namespace std;

class holiday {
private:
    int adhar;
    string name;

public:
    holiday() : adhar(66), name("harshal") {}

    holiday(int Aadhar) : adhar(Aadhar), name("harshal2") {}

    holiday(int adharNo, string Aname) : adhar(adharNo), name(Aname) {}

    void show() {
        cout << "Adhar: " << adhar << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    holiday h1, h2(66), h3(56, "harshal3");
    h1.show();
    h2.show();
    h3.show();

    return 0;
}
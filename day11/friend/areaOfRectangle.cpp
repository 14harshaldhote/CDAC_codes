#include<iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width";
    cin >> width;

    Rectangle rectangle(length, width);

    double rectangleArea = rectangle.calculateArea();

    cout << "Area of the rectangle: " << rectangleArea << endl;

    return 0;
}

#include<iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

      friend double calculateArea(const Rectangle& r);
};

double calculateArea(const Rectangle& r) {
    return r.length * r.width;
}

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    double rectangleArea = calculateArea(rectangle);

    cout << "Area of the rectangle: " << rectangleArea << endl;

    return 0;
}

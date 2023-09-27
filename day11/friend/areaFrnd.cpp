#include<iostream>//230943520004
#include<cmath>

using namespace std;

class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    friend double calculateArea(const Square& s);
};

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    friend double calculateArea(const Triangle& t);
};

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend double calculateArea(const Circle& c);
};

double calculateArea(const Square& s) {
    return s.side * s.side;
}

double calculateArea(const Triangle& t) {
    return 0.5 * t.base * t.height;
}

double calculateArea(const Circle& c) {
    return 3.14159265359 * c.radius * c.radius;
}

int main() {
    double sideLength, baseLength, heightLength, radius;

    cout << "Enter the side length of the square: ";
    cin >> sideLength;
    Square square(sideLength);

    cout << "Enter the base length of the triangle: ";
    cin >> baseLength;
    cout << "Enter the height of the triangle: ";
    cin >> heightLength;
    Triangle triangle(baseLength, heightLength);

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    double squareArea = calculateArea(square);
    double triangleArea = calculateArea(triangle);
    double circleArea = calculateArea(circle);

    cout << "Area of the square: " << squareArea << endl;
    cout << "Area of the triangle: " << triangleArea << endl;
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}

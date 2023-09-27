#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return 3.14159265 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(4.0, 6.0);
    Square square(5.0);
    Circle circle(3.0);

    cout << "Rectangle Area: " << rectangle.area() << endl;
    cout << "Square Area: " << square.area() << endl;
    cout << "Circle Area: " << circle.area() << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     virtual double area() = 0;
// };

// class Rectangle : public Shape {
// private:
//     double width;
//     double height;

// public:
//     Rectangle(double w, double h) : width(w), height(h) {}

//     double area() {
//         return width * height;
//     }
// };

// class Square : public Shape {
// private:
//     double side;

// public:
//     Square(double s) : side(s) {}

//     double area() {
//         return side * side;
//     }
// };

// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double area() {
//         return 3.14159265 * radius * radius;
//     }
// };

// int main() {
//     Rectangle rectangle(4.0, 6.0);
//     Square square(5.0);
//     Circle circle(3.0);

//     cout << "Rectangle Area: " << rectangle.area() << endl;
//     cout << "Square Area: " << square.area() << endl;
//     cout << "Circle Area: " << circle.area() << endl;

//     return 0;
// }

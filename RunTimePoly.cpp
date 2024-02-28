#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual double area() const {
        return 0; // Default implementation
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override the area function specifically for Circle
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the area function specifically for Rectangle
    double area() const override {
        return width * height;
    }
};

// Function to demonstrate polymorphism using Shape pointers
void printArea(const Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}

int main() {
    Circle circle(5);      // Circle with radius 5
    Rectangle rectangle(4, 5);  // Rectangle with width 4 and height 5

    // Demonstrate polymorphism
    printArea(circle);    // Calls Circle::area()
    printArea(rectangle); // Calls Rectangle::area()

    return 0;
}

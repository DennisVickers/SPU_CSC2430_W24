#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
   // Pure virtual function providing interface framework.
   virtual void draw() const = 0;
   virtual void move(double dx, double dy) = 0;
   virtual ~Shape() {} // Virtual destructor
};

// Concrete class
class Circle : public Shape {
private:
   double x, y, radius;
public:
   Circle(double x, double y, double radius) : x(x), y(y), radius(radius) {}
   void draw() const override {
      cout << "Drawing Circle at (" << x << ", " << y << ") with radius " << radius << endl;
   }
   void move(double dx, double dy) override {
      x += dx;
      y += dy;
   }
};

int main() {
   Circle c(1.0, 2.0, 3.0);
   c.draw(); // Concrete implementation of draw
   c.move(2.0, 3.0); // Concrete implementation of move
   c.draw(); // Circle has been moved and redrawn

   return 0;
}

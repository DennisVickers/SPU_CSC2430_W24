/*
 * Abstract Classes
 */
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
   // Pure virtual function
   virtual double area() = 0;

   // A normal member function with definition
   void setWidth(double w) {
      width = w;
   }
   void setHeight(double h) {
      height = h;
   }
protected:
   double width;
   double height;
};

// Derived class
class Rectangle: public Shape {
public:
   double area() {
      return (width * height);
   }
};

// Derived class
class Circle: public Shape {
public:
   double area() {
      return (3.14159 * width * width); // Assuming width as the radius
   }
};

int main() {
   Rectangle rect;
   Circle circle;

   rect.setWidth(5);
   rect.setHeight(7);
   // Print the area of the object.
   cout << "Total Rectangle area: " << rect.area() << endl;
   // Set the circle radius to 5
   circle.setWidth(5);
   cout << "Total Circle area: " << circle.area() << endl;

   return 0;
}

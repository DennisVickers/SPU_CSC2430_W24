/*
 * Run-time Polymorphism
 */
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
   virtual void draw() {
      cout << "Drawing a shape.\n";
   }
};

// Derived class
class Circle : public Shape {
public:
   void draw() override {
      cout << "Drawing a circle.\n";
   }
};

// Another derived class
class Rectangle : public Shape {
public:
   void draw() override {
     cout << "Drawing a rectangle.\n";
   }
};

int main() {
   Shape* shape;
   Circle circle;
   Rectangle rect;

   // Storing the address of Circle
   shape = &circle;
    
   // Call Circle's draw function
   shape->draw();

   // Storing the address of Rectangle
   shape = &rect;
    
   // Call Rectangle's draw function
   shape->draw();

   return 0;
}

/*
 * What is happening?
 * 1) The Shape pointer shape is used to refer to objects of both 
 *    Circle and Rectangle classes.
 * 2) When shape->area() is called, the actual function that gets invoked 
 *    is determined by the type of object shape is pointing to at runtime.
 * 3) If shape points to a Circle object, Circle's draw method is invoked. 
 *    If it points to a Rectangle object, Rectangle's draw method is invoked.
 */
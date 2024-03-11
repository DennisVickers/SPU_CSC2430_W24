/*
 * Dynamic casting
 */
#include <iostream>
using namespace std;

class Base {
public:
   virtual void display() {
      cout << "Display Base class" << endl;
   }
   virtual ~Base() {}
};

class Derived : public Base {
public:
   void display() override {
      cout << "Display Derived class" << endl;
   }
   void showDerived() {
      cout << "Specific to Derived class" << endl;
   }
};

int main() {
   Base* basePtr = new Derived();
   basePtr->display();  // Displays "Display Derived class" due to polymorphism

      // Attempting to downcast to Derived class using dynamic_cast
   Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
   if (derivedPtr != nullptr) {
      derivedPtr->display();  // Safe to call
      derivedPtr->showDerived();  // Safe to call
   } else {
      cout << "dynamic_cast failed" << endl;
   }

   // Deleting base class pointer (which points to a Derived object)
   delete basePtr;
   return 0;
}

#include <iostream>
using namespace std;

class Shallow {
public:
   int *data;

   // Constructor
   Shallow(int d) {
      data = new int(d);  // Allocate memory and assign value
      cout << "Constructor for : " << *data << endl;
   }

   // Copy constructor (shallow copy)
   Shallow(const Shallow &source) {
      data = source.data;
      cout << "Shallow copy constructor - copy of data: " << *data << endl;
   }

   // Destructor
   ~Shallow() {
      delete data;
      cout << "Destructor freeing data for: " << *data << endl;
   }
};

class Deep {
public:
   int *data;

   // Constructor
   Deep(int d) {
      data = new int(d);  // Allocate memory and assign value
      cout << "Constructor for : " << *data << endl;
   }

   // Copy constructor
   Deep(const Deep &source) {
      data = new int(*source.data);
      cout << "Deep Copy Constructor - copy of data: " << *data << endl;
   }

   // Destructor
   ~Deep() {
      delete data;
      cout << "Destructor freeing data for: " << *data << endl;
   }

};

void displayShallow(Shallow s) {
   cout << "In displayShallow() with value: " << *(s.data) << endl;
}


void displayDeep(Deep s) {
   cout << "In displayDeep() with value: " << *(s.data) << endl;
}

int main() {
//   Shallow obj1(100);
//
//   displayShallow(obj1);
//
//   Shallow obj2(obj1);

   Deep obj1(100);
   displayDeep(obj1);

   Deep obj2(200);

   return 0;
}

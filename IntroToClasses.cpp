#include <iostream>
#include <string>
using namespace std;

class Student {
private:
   string name;
   int id;

public:
   Student(string name, int id) { // Parameterized Constructor
      this->name = name;
      this->id = id;
   }

   void displayInfo() {
      cout << "Student Name: " << name << ", ID: " << id << endl;
   }
};

int main() {
   Student student1("Alice", 101);
   Student student2("Bob", 102);
   
   student1.displayInfo();
   student2.displayInfo();
   
   return 0;
}


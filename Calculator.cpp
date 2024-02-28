#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
   // Overloading by changing the number of parameters
   int add(int a, int b) {
      cout << "Adding two integers: ";
      return a + b;
   }
    
   int add(int a, int b, int c) {
      cout << "Adding three integers: ";
      return a + b + c;
   }
    
   // Overloading by changing the type of parameters
   double add(double a, double b) {
      cout << "Adding two doubles: ";
      return a + b;
   }
    
   // Combining both number and type variations
   double add(int a, double b) {
      cout << "Adding an integer and a double: ";
      return a + b;
   }
    
   double add(double a, int b) {
      cout << "Adding a double and an integer: ";
      return a + b;
   }
    
   int add(string a, string b) {
      cout << "Adding a two strings: ";
      return (stoi(a) + stoi(b));
   }
};

int main() {
   Calculator calc;
    
   cout << calc.add(5, 3) << endl;
   cout << calc.add(5, 3, 2) << endl;
   cout << calc.add(2.5, 3.8) << endl;
   cout << calc.add(5, 3.2) << endl;
   cout << calc.add(2.5, 3) << endl;
   cout << calc.add("3", "5") << endl;
    
   return 0;
}
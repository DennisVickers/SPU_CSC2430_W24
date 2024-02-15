#include <iostream>
#include <string>
using namespace std;

// Class template Pair with two different types T1 and T2
template <typename T1, typename T2>
class ValuePair {
private:
   T1 value1;
   T2 value2;

public:
   // Default constructor
   ValuePair() {
      this->value1 = T1();  // Default value for data type
      this->value2 = T2();  // Default value for data type
   }

   // Parameterized constructor
   ValuePair(T1 firstValue, T2 secondValue) {
      this->value1 = firstValue;
      this->value2 = secondValue;
   }

   // Setters
   void setFirst(T1 firstValue) {
      this->value1 = firstValue;
   }

   void setSecond(T2 secondValue) {
      this->value2 = secondValue;
   }

   // Display the pair
   void display() const {
      cout << "(" << this->value1 << ", " << this->value2 << ")\n";
   }
};

int main() {
   // Create a Pair of int and string
   ValuePair<int, string> firstPair(1, "Apple");
   firstPair.display();

   // Create a Pair of string and double
   ValuePair<string, double> secondPair;
   secondPair.setFirst("Temperature");
   secondPair.setSecond(36.5);
   secondPair.display();

   return 0;
}

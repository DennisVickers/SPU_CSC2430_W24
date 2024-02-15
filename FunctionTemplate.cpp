#include <iostream>
#include <string>
using namespace std;

// Function template to swap the values of two variables
template <typename T>
void GenericSwap(T& value1, T& value2) {
   T temp = value1;
   value1 = value2;
   value2 = temp;
}

int main() {
   // Example 1: Swapping integers
   int x = 10, y = 20;
   cout << "Before swap: x = " << x << ", y = " << y << endl;
   GenericSwap(x, y);
   cout << "After swap: x = " << x << ", y = " << y << endl;

   // Example 2: Swapping strings
   string first = "Hello", second = "World";
   cout << "Before swap: first = " << first << ", second = " << second << endl;
   GenericSwap(first, second);
   cout << "After swap: first = " << first << ", second = " << second << endl;

   return 0;
}
#include <limits>
#include <iostream>
using namespace std;

int main() {
   cout << "type\tlowest type\thighest type\n";
   cout << "int\t"
      << numeric_limits<int>::lowest() << '\t'
      << numeric_limits<int>::max() << '\n';
   cout << "float\t"
      << numeric_limits<float>::lowest() << '\t'
      << numeric_limits<float>::max() << '\n';
   cout << "double\t"
      << numeric_limits<double>::lowest() << '\t'
      << numeric_limits<double>::max() << '\n';
}
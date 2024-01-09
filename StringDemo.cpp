#include <iostream>
#include <string>
using namespace std;

int main() {
   // Construction and Initialization
   string str1;  // Default constructor
   string str2("Hello, world!");  // From C-string
   string str3(str2);  // Copy constructor
   string str4(str2, 0, 5);  // Substring constructor ("Hello")
   string str5(10, '*');  // Fill constructor

   // Basic Operations
   str1 = "Welcome";  // Assignment
   string str6 = str1 + " to C++!";  // Concatenation
   bool areEqual = (str2 == str3);  // Comparison

   // Capacity and Size
   cout << "Length of str5: " << str5.size() << endl;  // Size/Length
   str5.resize(5);  // Resize
   str5.reserve(20);  // Reserve

   // Modifiers
   str1.append(" to programming!");  // Append
   str1.insert(11, " world");  // Insert
   str1.erase(0, 8);  // Erase ("Welcome" is removed)
   str1.replace(0, 5, "Hello");  // Replace ("world" with "Hello")

   // String Operations
   size_t found = str2.find("world");  // Find
   string substr = str2.substr(7, 5);  // Substring ("world")
   int result = str1.compare(str6);  // Compare

   // Conversion
   const char* cstr = str2.c_str();  // Convert to C-string

   // Iterators
   cout << "Characters in str2: ";
   for (auto it = str2.begin(); it != str2.end(); ++it) {
      cout << *it;
   }
   cout << endl;

   // Output results
   cout << "str1: " << str1 << endl;
   cout << "str2: " << str2 << endl;
   cout << "str3: " << str3 << endl;
   cout << "str4: " << str4 << endl;
   cout << "str5: " << str5 << endl;
   cout << "str6: " << str6 << endl;
   cout << "Are str2 and str3 equal? " << (areEqual ? "Yes" : "No") << endl;
   cout << "Found 'world' in str2 at position: " << found << endl;
   cout << "Substring of str2: " << substr << endl;
   cout << "Comparison result of str1 and str6: " << result << endl;
   cout << "C-style string of str2: " << cstr << endl;

   return 0;
}

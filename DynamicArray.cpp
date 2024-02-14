#include <iostream>
#include <algorithm> // For copy
using namespace std;

class DynamicArray {
private:
   int* data;
   size_t size;

public:
   // Constructor
   DynamicArray(size_t size) {
      this->size = size;
      this->data = new int[size];
   }

   // Destructor
   ~DynamicArray() {
      delete[] this->data;
   }

   // Copy Constructor
   DynamicArray(const DynamicArray& orig) {
      this->size = orig.size;
      this->data = new int[orig.size];
      copy(orig.data, orig.data + orig.size, this->data);
   }

   // Copy Assignment Operator
   DynamicArray& operator=(const DynamicArray& orig) {
      if (this != &orig) {
         // Allocate new memory and copy the elements
         int* newData = new int[orig.size];
         copy(orig.data, orig.data + orig.size, newData);

         // Free the old memory
         delete[] this->data;

         // Assign the new memory
         this->data = newData;
         this->size = orig.size;
      }
      return *this;
   }

   // Move Constructor
    DynamicArray(DynamicArray&& orig) {
      this->data = orig.data;
      this->size = orig.size;
      orig.data = nullptr;
      orig.size = 0;
   }

   // Move Assignment Operator
   DynamicArray& operator=(DynamicArray&& orig) {
      if (this != &orig) {
         // Free the existing resources
         delete[] this->data;

         // Transfer ownership
         this->data = orig.data;
         this->size = orig.size;

         // Leave the moved-from object in a safe state
         orig.data = nullptr;
         orig.size = 0;
      }
      return *this;
   }
};


int main() {
   // Create an instance of DynamicArray
   DynamicArray arr1(10); // Array of size 10

   // Copy constructor usage
   DynamicArray arr2 = arr1; // Creates a copy of arr1

   // Move constructor usage
   DynamicArray arr3 = move(arr1); // Moves arr1 into arr3. arr1 is now empty.

   // Copy assignment usage
   DynamicArray arr4(5); // Anorig array, initially of size 5
   arr4 = arr2; // arr4 is now a copy of arr2

   // Move assignment usage
   DynamicArray arr5(3); // Yet another array, initially of size 3
   arr5 = move(arr2); // Moves arr2 into arr5. arr2 is now empty.

   // Demonstrating the use after move (arr1 and arr2 are empty, attempting to use them might lead to undefined behavior)
   cout << "Demonstration of DynamicArray usage completed." << endl;

   // Note: The destructors automatically clean up the dynamic memory of arr3, arr4, and arr5.
   return 0;
}
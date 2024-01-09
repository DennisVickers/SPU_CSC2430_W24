#include <iostream>
using namespace std;

void ShowArray(int arr[], int size) {
   for(int i = 0; i < size; i++) {
     cout << "Element at index " << i << ": " << arr[i] << endl;
   }
}

void ShowCharArray(char* arr, int size) {
   for(int i = 0; i < size; i++) {
     cout << "Element at index " << i << ": " << arr[i] << endl;
   }
}

int main() {
   // Declare and initialize an array
   // int myArray[5];
   // myArray[0] = 10;
   // myArray[1] = 20;
   // myArray[2] = 30;
   // myArray[3] = 40;
   // myArray[4] = 50;
   int myArray[5] = {10, 20, 30, 40, 50};
   // int myArray[5] = {10, 20};
   // int myArray[5]{10, 20, 30, 40, 50};
   // int myArray[] = {10, 20, 30, 40, 50}; 
   // int myArray[5] = {};

   ShowArray(myArray, 5);

   // char myCharArray[] = "Hello";
   // ShowCharArray(myCharArray,5);

   return 0;
}

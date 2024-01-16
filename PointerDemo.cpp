#include <iostream>
using namespace std;

void increment(int* value) {
    (*value)++;
}

int main() {
    // 1. Pointer Declaration and Initialization
    int a = 10;
    int* ptrA = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptrA << endl;

    // 2. Dereferencing Pointers
    cout << "Dereferencing ptrA gives: " << *ptrA << endl;

    // 3. Modifying Values through Pointers
    *ptrA = 20;
    cout << "New value of a: " << a << endl;

    // 4. Pointers and Functions
    increment(ptrA);
    cout << "Value of a after incrementing: " << a << endl;

    // 5. Pointers and Arrays
    int array[] = {1, 2, 3, 4, 5};
    int* ptrArray = array;

    cout << "First element of array: " << *ptrArray << endl;

    // Incrementing the pointer to access next array element
    ptrArray++;
    cout << "Second element of array: " << *ptrArray << endl;
    
    cout << "Third element of array: " << ptrArray[1] << endl;


    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    // 1. Declaring a C-string and a Pointer to it
    char str[] = "Hello, World!";
    char* ptr = str; // Pointer to the first character of str

    // 2. Traversing a C-string with a Pointer
    cout << "Traversing str: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    // Resetting pointer back to the start of str
    ptr = str;

    // 3. Copying a C-string using Pointers
    char copy[50];
    char* ptrCopy = copy;
    while (*ptr != '\0') {
        *ptrCopy = *ptr;
        ptr++;
        ptrCopy++;
    }
    *ptrCopy = '\0'; // Adding the null terminator at the end of copy

    cout << "Copied string: " << copy << endl;

    // 4. Comparing C-strings using Pointers
    char anotherStr[] = "Hello, World!";
    char* ptrAnother = anotherStr;

    ptr = str; // Resetting ptr to the start of str
    bool areEqual = true;
    while (*ptr != '\0' || *ptrAnother != '\0') {
        if (*ptr != *ptrAnother) {
            areEqual = false;
            break;
        }
        ptr++;
        ptrAnother++;
    }

    if (areEqual) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}

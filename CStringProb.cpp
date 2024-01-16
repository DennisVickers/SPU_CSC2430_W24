#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Correct usage of C-strings
    char greeting[20] = "Hello, ";
    char name[10] = "World";
    strcat(greeting, name); // Concatenating strings
    std::cout << greeting << std::endl; // Outputs: Hello, World

    // Problem 1: Buffer Overflow
    char smallBuffer[5];
    strcpy(smallBuffer, "This is a long string."); // This will overflow smallBuffer

    // Problem 2: Not Null-Terminated
    char nonNullTerminated[6] = {'H', 'e', 'l', 'l', 'o'}; // No '\0' at the end
    std::cout << nonNullTerminated << std::endl; // This might print garbage after "Hello"

    // Problem 3: Reading Uninitialized Memory
    char uninitializedBuffer[10];
    std::cout << uninitializedBuffer << std::endl; // This might print random garbage

    return 0;
}

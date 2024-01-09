#include <iostream>
#include <cstddef> // For std::size_t
using namespace std;

int main() {
    // Character type
    char a = 'A';
    wchar_t wideChar = L'Б'; // Wide character

    // Integer types
    short shortNumber = 32767;
    int integerNumber = 2147483647;
    long longNumber = 9223372036854775807;
    long long veryLongNumber = 9223372036854775807LL; // long long type

    // Floating point types
    float floatNumber = 3.14159f; // Single precision floating point
    double doubleNumber = 2.718281828459045; // Double precision floating point
    long double longDoubleNumber = 2.7182818284590452353602874713527L; // Extended precision floating point

    // Boolean type
    bool booleanValue = true;

    // Size_t type (unsigned integer type)
    size_t sizeValue = sizeof(longDoubleNumber); // Size of long double in bytes

    // Printing the values
    cout << "Char: " << a << "\n";
    cout << "Wide Char: " << wideChar << "\n";
    cout << "Short: " << shortNumber << "\n";
    cout << "Int: " << integerNumber << "\n";
    cout << "Long: " << longNumber << "\n";
    cout << "Long Long: " << veryLongNumber << "\n";
    cout << "Float: " << floatNumber << "\n";
    cout << "Double: " << doubleNumber << "\n";
    cout << "Long Double: " << longDoubleNumber << "\n";
    cout << "Boolean: " << boolalpha << booleanValue << "\n";
    cout << "Size of long double: " << sizeValue << " bytes\n";

    return 0;
}
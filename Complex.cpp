#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Operator overloading for addition
    Complex operator+(const Complex& rhs) const {
        return Complex(real + rhs.real, imag + rhs.imag);
    }

    // Operator overloading for subtraction
    Complex operator-(const Complex& rhs) const {
        return Complex(real - rhs.real, imag - rhs.imag);
    }

    // Operator overloading for multiplication
    Complex operator*(const Complex& rhs) const {
        return Complex(real * rhs.real - imag * rhs.imag,
                       real * rhs.imag + imag * rhs.real);
    }

    // Operator overloading for equality comparison
    bool operator==(const Complex& rhs) const {
        return real == rhs.real && imag == rhs.imag;
    }

    // Friend function for operator overloading of output to stream
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Output to stream overloading using friend function
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0) out << "+";
    out << c.imag << "i";
    return out;
}

/*
 * Arithmetic Operations: The +, -, and * operators are overloaded to perform 
 * arithmetic on complex numbers, taking into account the rules 
 * for complex arithmetic.
 * Comparison Operation: The == operator is overloaded to compare two complex
 * numbers for equality.
 * Stream Insertion Operation: The << operator is overloaded to enable 
 * easy printing of complex numbers. This is done using a friend function 
 * because the left-hand operand is an ostream object, not a Complex object.
 */

int main() {
    Complex c1(4.5, 3.2), c2(2.3, 1.4), c3;
    c3 = c1 + c2; // Uses overloaded + operator
    cout << "c1 + c2 = " << c3 << endl;

    c3 = c1 - c2; // Uses overloaded - operator
    cout << "c1 - c2 = " << c3 << endl;

    c3 = c1 * c2; // Uses overloaded * operator
    cout << "c1 * c2 = " << c3 << endl;

    if (c1 == c2) // Uses overloaded == operator
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    return 0;
}

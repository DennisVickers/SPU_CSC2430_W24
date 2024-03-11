/*
 * Constructor Delegation
 */
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    // Default constructor
    Person() : name("Unknown"), age(0) {
        cout << "Person default constructor called" << endl;
    }
    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Person parameterized constructor called" << endl;
    }
};

class Employee : public Person {
public:
    string company;
    // Constructor that delegates to the Person's parameterized constructor
    Employee(string n, int a, string c) : Person(n, a), company(c) {
        cout << "Employee constructor called" << endl;
    }
};

int main() {
    Employee emp("John", 30, "XYZ Corp");
    cout << "Employee Name: " << emp.name;
    cout << ", Age: " << emp.age;
    cout << ", Company: " << emp.company << endl;
    return 0;
}

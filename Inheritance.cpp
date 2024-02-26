#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Eating...\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Barking...\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.bark(); // Defined in Dog
    return 0;
}

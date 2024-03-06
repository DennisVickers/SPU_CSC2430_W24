#include <iostream>
#include <typeinfo> // For std::bad_cast

class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() {} // Virtual destructor for proper cleanup
};

class Derived1 : public Base {
public:
    void print() override {
        std::cout << "Derived1 class" << std::endl;
    }

    void specificFunction() {
        std::cout << "Specific function for Derived1" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void print() override {
        std::cout << "Derived2 class" << std::endl;
    }
};

void dynamicCastExample(Base *base) {
    // Attempt to cast Base pointer to Derived1 pointer
    Derived1 *derived1 = dynamic_cast<Derived1*>(base);
    if (derived1) { // Check if the cast was successful
        std::cout << "Cast to Derived1 successful." << std::endl;
        derived1->specificFunction();
    } else {
        std::cout << "Cast to Derived1 failed." << std::endl;
    }

    // Attempt to cast Base pointer to Derived2 pointer
    Derived2 *derived2 = dynamic_cast<Derived2*>(base);
    if (derived2) {
        std::cout << "Cast to Derived2 successful." << std::endl;
    } else {
        std::cout << "Cast to Derived2 failed." << std::endl;
    }
}

int main() {
    Base *base = new Derived1();
    base->print(); // Polymorphism in action

    dynamicCastExample(base);

    delete base; // Clean up
    return 0;
}

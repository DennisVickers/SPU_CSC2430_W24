#include "Animal.h"

Animal::Animal(string n, int a) : name(n), age(a) {};

void Animal::makeSound() const {
   cout << this->name << " makes no sound.\n" << endl;
}

void Animal::introduce() const {
   cout << "I am " << this->name << " and I am " << this->age << " years old.\n";
}

Animal::~Animal(){} // Virtual destructor for proper cleanup


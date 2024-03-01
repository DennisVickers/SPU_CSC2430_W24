// Animal.h
#ifndef OOP_ANIMAL_H
#define OOP_ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
   string name;
   int age;
public:
   Animal(string, int);
   virtual void makeSound() const;
   void introduce() const;
   virtual ~Animal();
};

#endif //OOP_ANIMAL_H


// Animal.cpp
#include "Animal.h"

Animal::Animal(string n, int a) : name(n), age(a) {};

void Animal::makeSound() const {
   cout << this->name << " makes no sound.\n" << endl;
}

void Animal::introduce() const {
   cout << "I am " << this->name << " and I am " << this->age << " years old.\n";
}

Animal::~Animal(){} // Virtual destructor for proper cleanup


// Cat.h
#ifndef OOP_CAT_H
#define OOP_CAT_H
#include "Animal.h"

class Cat : public Animal {
public:
   Cat(string n, int a) : Animal(n, a) {};

   void makeSound() const override {
      cout << "Meow!\n";
   }
};

#endif //OOP_CAT_H


// Dog.h
#ifndef OOP_DOG_H
#define OOP_DOG_H
#include "Animal.h"

class Dog : public Animal {
public:
   Dog(string n, int a) : Animal(n, a) {};

   void makeSound() const override {
      cout << "Woof!\n";
   }
};

#endif //OOP_DOG_H

// main.cpp
#include <iostream>
#include "Dog.h"
#include "Cat.h"

int main() {
   Animal* animal = new Animal("Generic Animal", 5);
   Animal* dog = new Dog("Blue", 16);
   Animal* cat = new Cat("Tigger", 11);

   animal->introduce();
   animal->makeSound();

   dog->introduce();
   dog->makeSound();

   cat->introduce();
   cat->makeSound();

   delete animal;
   delete dog;
   delete cat;

   return 0;
}



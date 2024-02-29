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

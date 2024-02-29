#ifndef TMP3_DOG_H
#define TMP3_DOG_H
#include "Animal.h"

class Dog : public Animal {
public:
   Dog(string n, int a) : Animal(n, a) {};

   void makeSound() const override {
      cout << "Woof!\n";
   }
};

#endif //TMP3_DOG_H

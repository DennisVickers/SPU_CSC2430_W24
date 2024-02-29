#ifndef TMP3_CAT_H
#define TMP3_CAT_H
#include "Animal.h"

class Cat : public Animal {
public:
   Cat(string n, int a) : Animal(n, a) {};

   void makeSound() const override {
      cout << "Meow!\n";
   }
};

#endif //TMP3_CAT_H

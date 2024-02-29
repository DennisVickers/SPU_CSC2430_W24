#ifndef TMP3_ANIMAL_H
#define TMP3_ANIMAL_H

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

#endif //TMP3_ANIMAL_H

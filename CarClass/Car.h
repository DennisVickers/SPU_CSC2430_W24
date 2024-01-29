#ifndef CARCLASS_CAR_H
#define CARCLASS_CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
   string brand;
   string model;
   int year;
   // Static data
   static int totalCars;
   // InLine Helper functions
   bool isValidYear(int checkYear) {
      bool valid;
      if (checkYear > 1985) {
         valid = true;
      } else {
         valid = false;
      }
      return valid;
   }

public:
   Car(); // Default Constructor
   Car(const string&, const string&, const int&); // Paramatized Constructor
   ~Car();    // Destructor

   // Getters
   string getBrand() const;
   string getModel() const;
   int getYear() const;

   // Setters
   void setBrand(const string&);
   void setModel(const string&);
   void setYear(const int&);

   // Static Methods
   static int getTotalCars();

};

#endif //CARCLASS_CAR_H

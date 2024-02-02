#ifndef CARCLASS_CAR_H
#define CARCLASS_CAR_H

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Car {
private:
   string make;
   string model;
   int year;
   char** previousOwners; // Dynamically allocated array of pointers to strings
   int numOwners;
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
   Car(const string&, const string&, const int&, const char* owners[], int numOwners); // Paramatized Constructor
   ~Car();    // Destructor

   // Getters
   string getMake() const;
   string getModel() const;
   int getYear() const;

   // Setters
   void setMake(const string&);
   void setModel(const string&);
   void setYear(const int&);

   void showCar() const;

   // Static Methods
   static int getTotalCars();

};

#endif //CARCLASS_CAR_H

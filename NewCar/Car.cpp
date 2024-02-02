#include "Car.h"

// Initialize static data
int Car::totalCars = 0;

// Default Constructor
Car::Car() {
   this->make = "Ford";
   this->model = "Model T";
   this->year = 1917;
   this->numOwners = 1;
   const char* owners[] = {"Dealer"};

   // Allocate memory for the array of pointers
   previousOwners = new char*[numOwners];

   // Allocate and copy each string
   for (int i = 0; i < numOwners; i++) {
      previousOwners[i] = new char[strlen(owners[i]) + 1];
      strcpy(previousOwners[i], owners[i]);
   }

   totalCars++;
}
// Constructor
Car::Car(const string& make, const string& model, const int& year, const char* owners[], int numOwners)
     : make(make), model(model), year(year), numOwners(numOwners) {
   // Allocate memory for the array of pointers
   previousOwners = new char*[numOwners];

   // Allocate and copy each string
   for (int i = 0; i < numOwners; i++) {
      previousOwners[i] = new char[strlen(owners[i]) + 1];
      strcpy(previousOwners[i], owners[i]);
   }

   totalCars++;
}

// Destructor
Car::~Car() {
   // Free each string
   for (int i = 0; i < numOwners; ++i) {
      delete[] previousOwners[i];
   }
   // Free the array of pointers
   delete[] previousOwners;

   totalCars--;
}

// Getter for make
string Car::getMake() const {
   return this->make;
}

// Setter for make
void Car::setMake(const string& make) {
   this->make = make;
}

// Getter for model
string Car::getModel() const {
   return this->model;
}

// Setter for model
void Car::setModel(const string& model) {
   this->model = model;
}

// Getter for year
int Car::getYear() const {
   return this->year;
}

// Setter for year
void Car::setYear(const int& year) {
   if (isValidYear(year)) {
      this->year = year;
   }
};

// Display car details and owners
void Car::showCar() const {
   cout << "Brand: " << this->make << endl;
   cout << "Model: " << this->model << endl;
   cout << "Year: " << this->year << endl;
   cout << "Owners: ";
   for (int i = 0; i < numOwners; i++) {
      cout << previousOwners[i];
      if (i < numOwners - 1) cout << ", ";
   }
}

int Car::getTotalCars() {
   return totalCars;
}

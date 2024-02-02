#include "Car.h"

// Initialize static data
int Car::totalCars = 0;

// Default Constructor
Car::Car() {
   this->make = "Ford";
   this->model = "Model T";
   this->year = 1917;
   totalCars++;
}
// Constructor
Car::Car(const string& make, const string& model, const int& year) : make(make), model(model), year(year) {
   totalCars++;
}

// Destructor
Car::~Car() {
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
}

int Car::getTotalCars() {
   return totalCars;
}

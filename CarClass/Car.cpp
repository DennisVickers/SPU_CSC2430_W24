#include "Car.h"

// Initialize static data
int Car::totalCars = 0;

// Default Constructor
Car::Car() {
   this->brand = "Ford";
   this->model = "Model T";
   this->year = 1917;
   totalCars++;
//   cout << "Car " << this->brand << " " << this->model << " constructed." << endl;
}
// Constructor
Car::Car(const string& _brand, const string& _model, const int& _year) : brand(_brand), model(_model), year(_year) {
   totalCars++;
//   cout << "Car " << this->brand << " " << this->model << " constructed." << endl;
}

// Destructor
Car::~Car() {
   totalCars--;
//   cout << "Car " << this->brand << " " << this->model << " destroyed." << endl;
}

// Getter for brand
string Car::getBrand() const {
   return this->brand;
}

// Setter for brand
void Car::setBrand(const string& brand) {
   this->brand = brand;
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



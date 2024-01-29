#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main() {

   cout << "\nFirst car:\n";
   Car myCar1;
   myCar1.setBrand("Mercedes");
   myCar1.setModel("E350");
   myCar1.setYear(2017);
   cout << "Brand: " << myCar1.getBrand() << endl;
   cout << "Model: " << myCar1.getModel() << endl;
   cout << "Year: " << myCar1.getYear() << endl;
   cout << "Total Cars: " << Car::getTotalCars() << endl;

   cout << "\nSecond car:\n";
   Car myCar2("Ford", "Expedition", 2011);
   cout << "Brand: " << myCar2.getBrand() << endl;
   cout << "Model: " << myCar2.getModel() << endl;
   cout << "Year: " << myCar2.getYear() << endl;

   cout << "Total Cars: " << Car::getTotalCars() << endl;

   return 0;
}


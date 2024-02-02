#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main() {

   Car myCar1;
   myCar1.setMake("Mercedes");
   myCar1.setModel("E350");
   myCar1.setYear(2017);

   cout << "\nFirst car:\n";
   myCar1.showCar();

   Car myCar2("Ford", "Expedition", 2011);
   cout << "\nSecond car:\n";
   myCar2.showCar();

   cout << "\nTotal Cars: " << Car::getTotalCars() << endl;

   return 0;
}


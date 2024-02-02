#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main() {
   const char* owners[] = {"John Doe", "Jane Smith", "Alice Johnson"};

   Car* myCar1 = new Car;
   myCar1->setMake("Mercedes");
   myCar1->setModel("E350");
   myCar1->setYear(2017);
   cout << "\nFirst car:\n";
   myCar1->showCar();

   Car* myCar2 = new Car("Ford", "Expedition", 2011, owners, 3);
   cout << "\n\nSecond car:\n";
   myCar2->showCar();

   cout << "\nTotal Cars: " << Car::getTotalCars() << endl;

   return 0;
}


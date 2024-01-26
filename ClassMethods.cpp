#include <iostream>
#include <string>
using namespace std;

class Car {

private:
   string brand;
   string model;
   int year;

public:
   // Default Constructor
   Car() {
      brand = "Unknown";
      model = "Unknown";
      year = 0;
      cout << "Car " << brand << " " << model << " constructed." << endl;
   }
   // Constructor
   Car(const string& _brand, const string& _model, const int& _year) : brand(_brand), model(_model), year(_year) {
      cout << "Car " << brand << " " << model << " constructed." << endl;
   }

   // Destructor
   ~Car() {
      cout << "Car " << brand << " " << model << " destroyed." << endl;
   }

   // Getter for brand
   string getBrand() const {
      return brand;
   }

   // Setter for brand
   void setBrand(const string& _brand) {
    brand = _brand;
   }

   // Getter for model
   string getModel() const {
      return model;
   }

   // Setter for model
   void setModel(const string& _model) {
      model = _model;
   }

   // Getter for year
   int getYear() const {
      return year;
   }

   // Setter for year
   void setYear(const int& _year) {
      if (_year > 1885) {  // Simple validation: the first car was invented around 1885
         year = _year;
      }
   };
};


int main() {

   cout << "First car:\n";
   Car myCar1;
   myCar1.setBrand("Mercedes");
   myCar1.setModel("E350");
   myCar1.setYear(2017);
   cout << "Brand: " << myCar1.getBrand() << endl;
   cout << "Model: " << myCar1.getModel() << endl;
   cout << "Year: " << myCar1.getYear() << endl;

   cout << "Second car:\n";
   Car myCar2("Ford", "Expedition", 2011);
   cout << "Brand: " << myCar2.getBrand() << endl;
   cout << "Model: " << myCar2.getModel() << endl;
   cout << "Year: " << myCar2.getYear() << endl;

   return 0;
}


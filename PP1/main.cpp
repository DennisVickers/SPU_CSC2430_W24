#include "Person.h"
#include <iostream>
using namespace std;

int main() {
   string first = "Dennis";
   string last = "Vickers";
   size_t age = 64;
   Person me(&first,&last,&age);

   cout << "Me: " << me.GetFirstName() << " " << me.GetLastName() << ", " << me.GetAge() << endl;

   return 0;
}

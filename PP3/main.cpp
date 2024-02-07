#include <iostream>
#include "Point.h"

void PrintDistances(const Point& start, const Point destinations[], size_t size) {
   double d1,d2,d3;
   d1 = start.Distance(destinations[0]), 3;
   d2 = start.Distance(destinations[1]), 3;
   d3 = start.Distance(destinations[2]), 3;
   std::cout << d1 << " " << d2 << " " << d3 << std::endl;
}

int main() {
   Point a(0,0);
   Point p[3];
   p[0].SetX(1);
   p[0].SetY(1);
   p[1].SetX(2);
   p[1].SetY(3);
   p[2].SetX(7);
   p[2].SetY(-1);
   PrintDistances(a, p, 3);

   return 0;
}

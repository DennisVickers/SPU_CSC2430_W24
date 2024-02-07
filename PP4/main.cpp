
#include <iostream>
#include "Point.h"

void PrintDistances(const Point& start, const Point destinations[], size_t size) {
   double d1,d2,d3;
   d1 = start.Distance(destinations[0]), 3;
   d2 = start.Distance(destinations[1]), 3;
   d3 = start.Distance(destinations[2]), 3;
   std::cout << d1 << " " << d2 << " " << d3 << std::endl;
}

void PrintClosest(const Point data[], size_t size) {
   double dist;
   double closest=-1.0;
   int pt1;
   int pt2;

   for (int i=0; i<size; i++) {
      for (int j=i+1; j<size; j++) {
         if (i!=j) {
            dist = data[i].Distance(data[j]);
            if (closest < 0 || (dist < closest)) {
               closest = dist;
               pt1 = i;
               pt2 = j;
            }
         }
      }
   }

   std::cout << "[" << data[pt1].ToString() << "]";
   std::cout << " and ";
   std::cout << "[" << data[pt2].ToString() << "]";
}

int main() {
//   Point a(0,0);
//   Point p[3];
//   p[0].SetX(1);
//   p[0].SetY(1);
//   p[1].SetX(2);
//   p[1].SetY(3);
//   p[2].SetX(7);
//   p[2].SetY(-1);
//   PrintDistances(a, p, 3);

   Point p[4];
   p[0].SetX(1);
   p[0].SetY(1);
   p[1].SetX(2);
   p[1].SetY(3);
   p[2].SetX(7);
   p[2].SetY(-1);
   p[3].SetX(0);
   p[3].SetY(0);

   PrintClosest(p, 4);

   return 0;
}

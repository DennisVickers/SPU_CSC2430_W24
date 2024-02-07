#include "Point.h"
#include <cmath>

Point::Point() {
   this->_x = 0;
   this->_y = 0;
};

Point::Point(double x, double y) {
   this->_x = x;
   this->_y = y;
};

void Point::SetX(double x) {
   this->_x = x;
};

void Point::SetY(double y) {
   this->_y = y;
};

double Point::Distance(const Point& point) const {
   // sqrt((x2 - x1)^2 + (y2 - y1)^2)
   int dX = point._x - this->_x;
   int dY = point._y - this->_y;
   double dist = sqrt(pow(dX,2) + pow(dY,2));
   return dist;
};

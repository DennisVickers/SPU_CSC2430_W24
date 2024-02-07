#ifndef PP4_POINT_H
#define PP4_POINT_H
#include <string>

class Point {
private:
   double _x;
   double _y;
public:
   Point();
   Point(double x, double y);
   void SetX(double x);
   void SetY(double y);
   double Distance(const Point& point) const;
   std::string ToString() const;
};


#endif //PP4_POINT_H

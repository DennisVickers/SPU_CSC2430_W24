#ifndef PP3_POINT_H
#define PP3_POINT_H


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
};


#endif //PP3_POINT_H

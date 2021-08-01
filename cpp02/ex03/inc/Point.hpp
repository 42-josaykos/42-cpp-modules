#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

public:
  Point(void);
  Point(float const& a, float const& b);
  Point(Point const& src);
  ~Point(void);

  Point& operator=(Point const& rhs);

  Fixed getX(void) const;
  Fixed getY(void) const;

private:
  Fixed const x;
  Fixed const y;
};

std::ostream& operator<<(std::ostream& out, Point const& inst);

#endif

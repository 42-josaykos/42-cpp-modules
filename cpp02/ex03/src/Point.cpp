#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0) { return; }

Point::Point(float const& a, float const& b) : x(a), y(b) { return; }

Point::Point(Point const& src) {
  *this = src;
  return;
}

Point::~Point(void) { return; }

Point& Point::operator=(Point const& rhs) {
  if (this != &rhs) {
  }
  return *this;
}

Fixed Point::getX(void) const { return this->x; }

Fixed Point::getY(void) const { return this->y; }

std::ostream& operator<<(std::ostream& out, Point const& inst) {
  out << "(" << inst.getX() << ", " << inst.getY() << ")";
  return out;
}

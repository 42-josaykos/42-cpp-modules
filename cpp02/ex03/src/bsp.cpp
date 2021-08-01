#include "Point.hpp"

float abs(float i) { return i < 0 ? -i : i; }

Fixed area(Point const& a, Point const& b, Point const& c) {
  // Area = | (ax(by - cy) + bx(cy - ay) + cx(ay - by)) / 2 |
  float area =
      (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
       b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
       c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) /
      2.0f;
  return Fixed(abs(area));
}

bool bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
  Fixed ABC = area(a, b, c);
  Fixed PAB = area(point, a, b);
  Fixed PBC = area(point, b, c);
  Fixed PAC = area(point, a, c);

  std::cout << "Area of triangle  ABC: " << ABC << std::endl;
  std::cout << "Area of PAB: " << PAB << std::endl;
  std::cout << "Area of PBC: " << PBC << std::endl;
  std::cout << "Area of PAC: " << PAC << std::endl;
  std::cout << "Total PAB + PBC + PAC: " << PAB + PBC + PAC << std::endl
            << std::endl;

  if (PAB + PBC + PAC == ABC && PAB.getRawBits() != 0 &&
      PBC.getRawBits() != 0 && PAC.getRawBits() != 0) {
    return true;
  }
  return false;
}
#include "Point.hpp"
#include <iostream>

int main(void) {
  Point A(1.2, 2.3);

  std::cout << A.getX() << std::endl;
  std::cout << A.getY() << std::endl;

  return 0;
}

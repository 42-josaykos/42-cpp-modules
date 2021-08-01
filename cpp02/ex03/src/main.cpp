#include "Point.hpp"
#include "bsp.hpp"
#include <iostream>

// To verify: https://planetcalc.com/8108/
int main(void) {
  Point const A(0, 0);
  Point const B(20, 0);
  Point const C(10, 30);
  // Point const P(16, 5); // Inside
  Point const P(10, 15); // Not inside

  if (bsp(A, B, C, P)) {
    std::cout << "Point is inside" << std::endl;
    return 1;
  } else {
    std::cout << "Point is not inside" << std::endl;
  }

  return 0;
}

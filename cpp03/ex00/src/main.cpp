#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
  ClapTrap A("Jo");
  // ClapTrap B(A);
  ClapTrap B = A;

  B.attack("Boss");
  B.takeDamage(15);
  B.beRepaired(10);

  return 0;
}

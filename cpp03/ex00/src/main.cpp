#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
  ClapTrap A("Jo");
  ClapTrap B = A;
  ClapTrap C(B);

  B.attack("Boss");
  B.takeDamage(15);
  B.beRepaired(10);

  C.attack("Boss 2");

  return 0;
}

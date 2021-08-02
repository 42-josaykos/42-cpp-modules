#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
  // ClapTrap A("Jo");
  // ClapTrap B(A);
  // ClapTrap B = A;
  ScavTrap C("Al");

  // B.attack("Boss");
  // B.takeDamage(15);
  // B.beRepaired(10);

  C.attack("Boss");

  return 0;
}

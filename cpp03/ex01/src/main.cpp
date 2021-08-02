#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
  // ClapTrap and ScavTrap constructors always needs a name as parameter !
  // Default constructors are private in both
  ClapTrap A("Jo");
  ClapTrap B(A);
  ClapTrap C = A;
  ScavTrap D("Al");
  ScavTrap E = D;
  ScavTrap F(E);

  B.attack("Boss 1");
  B.takeDamage(15);
  B.beRepaired(10);

  C.attack("Boss 2");

  D.attack("Boss 3");
  E.takeDamage(5);
  F.beRepaired(3);

  return 0;
}

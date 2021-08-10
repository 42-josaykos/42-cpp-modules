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

  E.attack("Boss 4");

  F.beRepaired(3);
  F.beRepaired(3);
  F.guardGate();

  ScavTrap* G = new ScavTrap("clap on the heap");
  G->attack("an enemy");
  delete G;

  return 0;
}

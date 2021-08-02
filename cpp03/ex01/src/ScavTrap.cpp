#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(NULL) {
  std::cout << "<-- ScavTrap: dafault constructor called -->" << std::endl;
  return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "<-- ScavTrap: name constructor called -->" << std::endl;
  return;
}

ScavTrap::ScavTrap(ScavTrap const& src) {
  *this = src;
  return;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "<-- ScavTrap: destructor called -->" << std::endl;
  return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

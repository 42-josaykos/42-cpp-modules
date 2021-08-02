#include "ScavTrap.hpp"

// Private. Never Called.
ScavTrap::ScavTrap(void) : ClapTrap(NULL) {
  std::cout << "<-- ScavTrap: default constructor called -->" << std::endl;
  return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "<-- ScavTrap: name constructor called -->" << std::endl;
  return;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {
  std::cout << "<-- ScavTrap: copy constructor called -->" << std::endl;
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

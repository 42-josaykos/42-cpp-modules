#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(NULL) { return; }

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
  *this = src;
  return;
}

FragTrap::~FragTrap(void) { return; }

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(NULL), ScavTrap(""), FragTrap("") {
  std::cout << "<-- DiamondTrap: default constructor called -->" << std::endl;
  return;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
  std::cout << "<-- DiamondTrap: name constructor called -->" << std::endl;
  this->_name = name;
  return;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src) {
  std::cout << "<-- DiamondTrap: copy constructor called -->" << std::endl;
  *this = src;
  return;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "<-- DiamondTrap: destructor called -->" << std::endl;
  return;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

void DiamondTrap::attack(const std::string& target) {
  this->ScavTrap::attack(target);
  return;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "Who am I ? My real name is " << this->_name << " !"
            << std::endl;
  return;
}
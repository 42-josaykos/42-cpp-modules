#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(NULL) {
  std::cout << "<-- FragTrap: default constructor called -->" << std::endl;
  this->_hitpoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "<-- FragTrap: name constructor called -->" << std::endl;
  this->_hitpoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  return;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
  std::cout << "<-- FragTrap: copy constructor called -->" << std::endl;
  *this = src;
  return;
}

FragTrap::~FragTrap(void) {
  std::cout << "<-- FragTrap: destructor called -->" << std::endl;
  return;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return *this;
}

void FragTrap::attack(const std::string& target) {
  std::cout << "FragTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!"
            << std::endl;
  return;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "High fives guys !" << std::endl;
  return;
}

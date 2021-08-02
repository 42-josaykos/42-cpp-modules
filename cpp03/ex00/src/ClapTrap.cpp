#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
    : _name(NULL), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
  return;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "String constructor called" << std::endl;
  return;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs) {
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return *this;
}
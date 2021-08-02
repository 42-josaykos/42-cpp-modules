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

ClapTrap::ClapTrap(ClapTrap const& src) {
  *this = src;
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

void ClapTrap::attack(const std::string& target) {
  std::cout << "ClapTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!"
            << std::endl;
  return;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << this->_name << " takes " << amount << " points of damage!"
            << std::endl;
  return;
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << this->_name << " has been repaired " << amount << " points!"
            << std::endl;
  return;
}
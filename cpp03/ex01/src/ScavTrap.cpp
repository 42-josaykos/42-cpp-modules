#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "<-- ScavTrap: name constructor called -->" << std::endl;
  this->_hitpoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
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
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  std::cout << "ScavTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!"
            << std::endl;
  return;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode"
            << std::endl;
  return;
}

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
  std::cout << "<-- DiamondTrap: name constructor called -->" << std::endl;
  this->_name = name;
  this->_energyPoints = 50;
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
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return *this;
}

// void DiamondTrap::attack(const std::string& target) {
//   this->ScavTrap::attack(target);
//   return;
// }

void DiamondTrap::takeDamage(unsigned int amount) {
  std::cout << "FragTrap " << this->_name << " takes " << amount
            << " points of damage!" << std::endl;
  return;
}

void DiamondTrap::beRepaired(unsigned int amount) {
  std::cout << "FragTrap " << this->_name << " has been repaired " << amount
            << " points!"
            << " Status: "
            << "[Hit Points: " << this->_hitpoints << "] "
            << "[Energy Points: " << this->_energyPoints << "] "
            << "[Attack Damage: " << this->_attackDamage << "]" << std::endl;
  return;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "Who am I ? My real name is " << this->_name << " !"
            << " And my ClapTrap name is " << this->ClapTrap::_name << " !"
            << std::endl;
  return;
}
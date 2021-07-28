#include "HumanB.hpp"

HumanB::HumanB(void) { return; }

HumanB::HumanB(std::string const name) : _name(name) { return; }

HumanB::~HumanB(void) { return; }

void HumanB::setWeapon(Weapon& str) {
  this->_weapon = &str;
  return;
}

void HumanB::attack(void) {
  std::cout << this->_name << " attacks with his " << this->_weapon->getType()
            << std::endl;
  return;
}
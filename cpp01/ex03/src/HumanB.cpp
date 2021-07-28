#include "HumanB.hpp"

HumanB::HumanB(std::string const name) : _name(name), _weapon(NULL) { return; }

HumanB::~HumanB(void) { return; }

void HumanB::setWeapon(Weapon& str) {
  this->_weapon = &str;
  return;
}

void HumanB::attack(void) {
  if (this->_weapon) {
    std::cout << this->_name << " attacks with his " << this->_weapon->getType()
              << std::endl;
  } else {
    std::cout << this->_name << " attacks with his... "
              << "fists!" << std::endl;
  }
  return;
}
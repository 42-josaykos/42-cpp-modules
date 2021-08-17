#include "Character.hpp"

Character::Character(void) { return; }

Character::Character(Character const& src) {
  *this = src;
  return;
}

Character::~Character(void) { return; }

Character& Character::operator=(Character const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

std::string const& Character::getName() const { return this->_name; }

void Character::equip(AMateria* m) { return; }

void Character::unequip(int idx) { return; }

void Character::use(int idx, ICharacter& target) { return; }

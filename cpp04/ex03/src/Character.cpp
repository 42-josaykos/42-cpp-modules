#include "Character.hpp"
#include "Ice.hpp"

Character::Character(std::string const& name) : _name(name) {
  std::cout << "> Character : string ctor" << std::endl;
  for (int i = 0; i < 4; i++) {
    this->_inventory[i] = NULL;
  }
  return;
}

Character::Character(Character const& src) : ICharacter() {
  std::cout << "> Character : copy ctor Character src" << std::endl;
  *this = src;
  return;
}

Character::Character(ICharacter const* ptr) : _name(ptr->getName()) {
  std::cout << "> Character : copy ctor ICharacter ptr" << std::endl;
}

Character::~Character(void) {
  std::cout << "> Character : dtor" << std::endl;
  return;
}

Character& Character::operator=(Character const& rhs) {
  if (this != &rhs) {
    this->_name = rhs._name;
  }
  return *this;
}

std::string const& Character::getName() const { return this->_name; }

void Character::equip(AMateria* m) {
  int i = 0;
  while (this->_inventory[i]) {
    i++;
  }
  this->_inventory[i] = m;
  return;
}

void Character::use(int idx, ICharacter& target) {
  if (this->_inventory[idx]) {
    this->_inventory[idx]->use(target);
  }
  return;
}

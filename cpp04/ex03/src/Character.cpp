#include "Character.hpp"
#include "Ice.hpp"

Character::Character(std::string const& name) : _name(name) {
  std::cout << "> Character : string ctor" << std::endl;
  this->_inventory = new AMateria*[4];
  for (int i = 0; i < 4; i++) {
    this->_inventory[i] = NULL;
  }
  return;
}

Character::Character(Character const& src) : _name(src._name) {
  std::cout << "> Character : copy ctor Character src" << std::endl;
  this->_inventory = new AMateria*[4];
  for (int i = 0; i < 4; i++) {
    this->_inventory[i] = NULL;
  }
  return;
}

Character::Character(ICharacter const* ptr) : _name(ptr->getName()) {
  std::cout << "> Character : copy ctor ICharacter ptr" << std::endl;

  this->_inventory = new AMateria*[4];
  for (int i = 0; i < 4; i++) {
    this->_inventory[i] = NULL;
  }
}

Character::~Character(void) {
  std::cout << "> Character : dtor" << std::endl;
  delete[] this->_inventory;
  return;
}

Character& Character::operator=(Character const& rhs) {
  if (this != &rhs) {
    delete[] this->_inventory;
    this->_inventory = new AMateria*[4];
    for (int i = 0; i < 4; i++) {
      this->_inventory[i] = NULL;
    }
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

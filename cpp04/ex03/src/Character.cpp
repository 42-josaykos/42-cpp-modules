#include "Character.hpp"

Character::Character(std::string const& name) : _name(name) {
  std::cout << "Character : string ctor" << std::endl;
  return;
}

Character::Character(Character const& src) {
  std::cout << "Character : copy ctor" << std::endl;
  *this = src;
  return;
}

Character::~Character(void) {
  std::cout << "Character : dtor" << std::endl;
  return;
}

Character& Character::operator=(Character const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

std::string const& Character::getName() const { return this->_name; }

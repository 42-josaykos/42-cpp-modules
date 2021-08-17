#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {
  std::cout << "> AMateria : string ctor" << std::endl;
  return;
}

AMateria::AMateria(AMateria const& src) {
  std::cout << " > AMateria : copy ctor" << std::endl;
  *this = src;
  return;
}

AMateria::~AMateria(void) {
  std::cout << "> AMateria : dtor" << std::endl;
  return;
}

AMateria& AMateria::operator=(AMateria const& rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

std::string const& AMateria::getType(void) const { return this->_type; }
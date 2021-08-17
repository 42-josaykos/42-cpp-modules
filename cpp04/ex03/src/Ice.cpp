#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
  std::cout << "> Ice : default ctor" << std::endl;
  return;
}

Ice::Ice(Ice const& src) : AMateria(src) {
  std::cout << "> Ice : copy ctor" << std::endl;
  *this = src;
  return;
}

Ice::~Ice(void) {
  std::cout << "> Ice : dtor" << std::endl;
  return;
}

Ice& Ice::operator=(Ice const& rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

AMateria* Ice::clone(void) const { return new Ice(); }

void Ice::use(void) {
  std::cout << "* shoots an ice bolt at "
            << " *" << std::endl;
  // std::cout << this->_type << "attacks " << target.getName() << std::endl;
  return;
}

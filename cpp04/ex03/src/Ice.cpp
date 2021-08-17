#include "Ice.hpp"

Ice::Ice(void) : AMateria("Ice") { return; }

Ice::Ice(Ice const& src) : AMateria("Ice") {
  *this = src;
  return;
}

Ice::~Ice(void) { return; }

Ice& Ice::operator=(Ice const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

AMateria* AMateria::clone(void) const {
  AMateria* materia;
  return materia;
}

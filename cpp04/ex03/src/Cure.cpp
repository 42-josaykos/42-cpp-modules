#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") { return; }

Cure::Cure(Cure const& src) : AMateria("Cure") {
  *this = src;
  return;
}

Cure::~Cure(void) { return; }

Cure& Cure::operator=(Cure const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

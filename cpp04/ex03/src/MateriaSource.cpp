#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) { return; }

MateriaSource::MateriaSource(MateriaSource const& src) {
  *this = src;
  return;
}

MateriaSource::~MateriaSource(void) { return; }

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

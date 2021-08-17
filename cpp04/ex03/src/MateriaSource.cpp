#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  this->_source = new AMateria*[4];
  for (int i = 0; i < 4; i++) {
    this->_source[i] = NULL;
  }
  return;
}

MateriaSource::MateriaSource(MateriaSource const& src) {
  this->_source = new AMateria*[4];
  for (int i = 0; i < 4; i++) {
    this->_source[i] = src._source[i]->clone();
  }
  return;
}

MateriaSource::~MateriaSource(void) {
  for (int i = 0; this->_source[i]; i++) {
    delete this->_source[i];
  }
  delete[] this->_source;
  return;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
  if (this != &rhs) {
    for (int i = 0; this->_source[i]; i++) {
      delete this->_source[i];
    }
    delete[] this->_source;
    this->_source = new AMateria*[4];
    for (int i = 0; i < 4; i++) {
      this->_source[i] = rhs._source[i]->clone();
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
  int i = 0;

  if (materia) {
    while (this->_source[i]) {
      i++;
    }
    if (i < 4) {
      this->_source[i] = materia;
    }
  }
  return;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; this->_source[i]; i++) {
    if (this->_source[i]->getType().compare(type) == 0) {
      return this->_source[i]->clone();
    }
  }
  return 0;
}

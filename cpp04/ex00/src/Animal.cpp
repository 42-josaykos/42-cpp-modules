#include "Animal.hpp"

Animal::Animal(void) : type("unknown") {
  std::cout << "< Animal: default constructor called >" << std::endl;
  return;
}

Animal::Animal(Animal const &src) {
  std::cout << "< Animal: copy constructor called >" << std::endl;
  *this = src;
  return;
}

Animal::~Animal(void) {
  std::cout << "< Animal: destructor called >" << std::endl;
  return;
}

Animal &Animal::operator=(Animal const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

std::string Animal::getType(void) const { return this->type; }

void Animal::makeSound(void) const {
  std::cout << "No sound... (unknown Animal)" << std::endl;
  return;
}
#include "Cat.hpp"

Cat::Cat(void) : Animal() {
  this->type = "Cat";
  std::cout << "< Cat: default constructor called >" << std::endl;
  return;
}

Cat::Cat(Cat const &src) : Animal(src) {
  std::cout << "< Cat: copy constructor called >" << std::endl;
  *this = src;
  return;
}

Cat::~Cat(void) {
  std::cout << "< Cat: destructor called >" << std::endl;
  return;
}

Cat &Cat::operator=(Cat const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Nyan Nyan... (I'm a japanese cat !)" << std::endl;
  return;
}

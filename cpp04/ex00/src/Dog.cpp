#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  this->type = "Dog";
  std::cout << "< Dog: default constructor called >" << std::endl;
  return;
}

Dog::Dog(Dog const &src) : Animal(src) {
  std::cout << "< Dog: copy constructor called >" << std::endl;
  *this = src;
  return;
}

Dog::~Dog(void) {
  std::cout << "< Dog: destructor called >" << std::endl;
  return;
}

Dog &Dog::operator=(Dog const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Wan Wan... (I'm a japanese dog !)" << std::endl;
  return;
}

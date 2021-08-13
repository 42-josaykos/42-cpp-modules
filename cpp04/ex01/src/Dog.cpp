#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  std::cout << "< Dog: default constructor called >" << std::endl;
  this->type = "Dog";
  this->brain = new Brain();
  return;
}

Dog::Dog(Dog const& src) : Animal(src) {
  std::cout << "< Dog: copy constructor called >" << std::endl;
  *this = src;
  this->type = "deep";
  return;
}

Dog::~Dog(void) {
  std::cout << "< Dog: destructor called >" << std::endl;
  delete this->brain;
  return;
}

Dog& Dog::operator=(Dog const& rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Wan Wan... (I'm a japanese dog !)" << std::endl;
  return;
}

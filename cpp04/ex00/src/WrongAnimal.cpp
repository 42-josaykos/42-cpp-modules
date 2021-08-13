#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("unknown") {
  std::cout << "< WrongAnimal: default constructor called >" << std::endl;
  return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
  std::cout << "< WrongAnimal: copy constructor called >" << std::endl;
  *this = src;
  return;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "< WrongAnimal: destructor called >" << std::endl;
  return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

std::string WrongAnimal::getType(void) const { return this->type; }

void WrongAnimal::makeSound(void) const {
  std::cout << "No sound... (unknown WrongAnimal)" << std::endl;
  return;
}

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
  this->type = "WrongCat";
  std::cout << "< WrongCat: default constructor called >" << std::endl;
  return;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
  std::cout << "< WrongCat: copy constructor called >" << std::endl;
  *this = src;
  return;
}

WrongCat::~WrongCat(void) {
  std::cout << "< WrongCat: destructor called >" << std::endl;
  return;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void WrongCat::makeSound(void) const {
  std::cout << "Meoooow... (Wrong cat !)" << std::endl;
  return;
}

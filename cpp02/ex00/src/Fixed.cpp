#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {
  std::cout << "Default constructor called" << std::endl;
  return;
}

Fixed::Fixed(Fixed const& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs) {
    this->_rawBits = rhs.getRawBits();
  }
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawbits member function called" << std::endl;
  this->_rawBits = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const& inst) {
  out << inst.getRawBits();
  return out;
}

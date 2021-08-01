#include "Fixed.hpp"
#include <cmath>

///////////////// constructors /////////////////////

// default
Fixed::Fixed(void) : _rawBits(0) {
  std::cout << "Default constructor called" << std::endl;
  return;
}

// copy
Fixed::Fixed(Fixed const& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return;
}

// params
Fixed::Fixed(int const& nb) : _rawBits(nb) {
  std::cout << "Int constructor called" << std::endl;
  this->_rawBits = nb << this->_bits; // multiply nb by 256
  return;
}

Fixed::Fixed(float const& nb) {
  std::cout << "Float constructor called" << std::endl;
  this->_rawBits = roundf(nb * (1 << this->_bits)); // multiply nb by 256
  return;
}

// destructor
Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}

/////////// operator overloads ////////////////////

Fixed& Fixed::operator=(Fixed const& rhs) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs) {
    this->_rawBits = rhs.getRawBits();
  }
  return *this;
}

//////////// member functions /////////////////////

int Fixed::getRawBits(void) const { return this->_rawBits; }

void Fixed::setRawBits(int const raw) { this->_rawBits = raw; }

float Fixed::toFloat(void) const {
  // divide nb by 256
  float res = static_cast<float>(this->_rawBits) / (1 << this->_bits);
  return res;
}

int Fixed::toInt(void) const {
  int res = this->_rawBits >> this->_bits; // divide nb by 256
  return res;
}

//////////// non-member functions //////////////////

std::ostream& operator<<(std::ostream& out, Fixed const& inst) {
  out << inst.toFloat();
  return out;
}

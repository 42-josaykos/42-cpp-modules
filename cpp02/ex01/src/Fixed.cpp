#include "Fixed.hpp"

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
  return;
}

Fixed::Fixed(float const& nb) {
  std::cout << "Float constructor called" << std::endl;
  (void)nb;

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
  float res = 0.0f;
  return res;
}

int Fixed::toInt(void) const {
  int res = 0;

  res = this->_rawBits;
  return res;
}

//////////// non-member functions //////////////////

std::ostream& operator<<(std::ostream& out, Fixed const& inst) {
  out << inst.getRawBits();
  return out;
}

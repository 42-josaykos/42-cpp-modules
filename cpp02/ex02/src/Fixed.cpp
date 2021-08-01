#include "Fixed.hpp"
#include <cmath>

///////////////// constructors /////////////////////

// default
Fixed::Fixed(void) : _rawBits(0) { return; }

// copy
Fixed::Fixed(Fixed const& src) {
  *this = src;
  return;
}

// params
Fixed::Fixed(int const& nb) : _rawBits(nb) {
  this->_rawBits = nb << this->_bits; // multiply nb by 256
  return;
}

Fixed::Fixed(float const& nb) {
  this->_rawBits = roundf(nb * (1 << this->_bits)); // multiply nb by 256
  return;
}

// destructor
Fixed::~Fixed(void) { return; }

/////////// operator overloads ////////////////////

Fixed& Fixed::operator=(Fixed const& rhs) {
  if (this != &rhs) {
    this->_rawBits = rhs.getRawBits();
  }
  return *this;
}

// COMPARISONS
bool Fixed::operator>(Fixed const& rhs) const {
  return this->_rawBits > rhs._rawBits;
}

bool Fixed::operator<(Fixed const& rhs) const {
  return this->_rawBits < rhs._rawBits;
}

bool Fixed::operator>=(Fixed const& rhs) const {
  return this->_rawBits >= rhs._rawBits;
}

bool Fixed::operator<=(Fixed const& rhs) const {
  return this->_rawBits <= rhs._rawBits;
}

bool Fixed::operator==(Fixed const& rhs) const {
  return this->_rawBits == rhs._rawBits;
}

bool Fixed::operator!=(Fixed const& rhs) const {
  return this->_rawBits != rhs._rawBits;
}

// OPERATIONS
Fixed Fixed::operator+(const Fixed& rhs) const {
  return this->_rawBits + rhs._rawBits;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  return this->_rawBits - rhs._rawBits;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  return this->toFloat() / rhs.toFloat();
}

// INCREMENTATIONS
Fixed& Fixed::operator++(void) {
  this->_rawBits++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp = *this;
  ++(*this);
  return tmp;
}

Fixed& Fixed::operator--(void) {
  this->_rawBits--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp = *this;
  --(*this);
  return tmp;
}

//////////// static member functions ///////////////

Fixed const& Fixed::min(Fixed const& nb1, Fixed const& nb2) {
  if (nb1._rawBits < nb2._rawBits) {
    return (nb1);
  }
  return (nb2);
}

Fixed const& Fixed::max(Fixed const& nb1, Fixed const& nb2) {
  if (nb1._rawBits > nb2._rawBits) {
    return (nb1);
  }
  return (nb2);
}

Fixed const& Fixed::min(Fixed& nb1, Fixed& nb2) {
  if (nb1._rawBits < nb2._rawBits) {
    return (nb1);
  }
  return (nb2);
}

Fixed const& Fixed::max(Fixed& nb1, Fixed& nb2) {
  if (nb1._rawBits > nb2._rawBits) {
    return (nb1);
  }
  return (nb2);
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

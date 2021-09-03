#include "Array.hpp"

Array::Array(void) { return; }

Array::Array(Array const& src) {
  *this = src;
  return;
}

Array::~Array(void) { return; }

Array& Array::operator=(Array const& rhs) {
  if (this != &rhs) {
    ;
  }
  return *this;
}

#ifndef TFUNCTIONS_HPP
#define TFUNCTIONS_HPP

#include <iostream>

// Swap two variables
template <typename T> void swap(T& p1, T& p2) {
  T tmp = p1;
  p1 = p2;
  p2 = tmp;
  return;
}

#endif

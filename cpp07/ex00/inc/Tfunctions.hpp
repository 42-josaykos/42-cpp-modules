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

// Compares two variables and return the smallest one
template <typename T> T& min(T& p1, T& p2) {
  if (p1 < p2) {
    return p1;
  } else {
    return p2;
  }
}

// Compares two variables and return the biggest one
template <typename T> T& max(T& p1, T& p2) {
  if (p1 > p2) {
    return p1;
  } else {
    return p2;
  }
}

#endif

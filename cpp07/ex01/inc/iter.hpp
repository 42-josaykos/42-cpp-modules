#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void print_element(T& element) {
  std::cout << element << std::endl;
}

template <typename T> void iter(T* array, int const& length, void (*f)(T&)) {
  for (int i = 0; i < length; i++) {
    f(array[i]);
  }
  return;
}

#endif

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T> int easyfind(T& container, int const& val) {
  typename T::iterator it = std::find(container.begin(), container.end(), val);
  if (it == container.end()) {
    throw std::exception();
  }
  return *it;
}

#endif

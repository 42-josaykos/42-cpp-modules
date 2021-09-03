#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

class Array {

public:
  Array(void);
  Array(Array const& src);
  virtual ~Array(void);

  Array& operator=(Array const& rhs);

private:
};

#endif

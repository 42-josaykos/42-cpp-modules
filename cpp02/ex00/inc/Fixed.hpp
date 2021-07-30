#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
  Fixed(void);
  Fixed(Fixed const& src);
  ~Fixed(void);

  Fixed& operator=(Fixed const& rhs);

  int getRawBits(void);
  void setRawBits(int const raw);

private:
  static int const _bits = 8;
  int _val;
};

#endif

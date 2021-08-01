#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
  Fixed(void);
  Fixed(int const& nb);
  Fixed(float const& nb);
  Fixed(Fixed const& src);
  ~Fixed(void);

  Fixed& operator=(Fixed const& rhs);

  bool operator>(Fixed const& rhs) const;
  bool operator<(Fixed const& rhs) const;
  bool operator>=(Fixed const& rhs) const;
  bool operator<=(Fixed const& rhs) const;
  bool operator==(Fixed const& rhs) const;
  bool operator!=(Fixed const& rhs) const;

  Fixed operator+(Fixed const& rhs) const;
  Fixed operator-(Fixed const& rhs) const;
  Fixed operator*(Fixed const& rhs) const;
  Fixed operator/(Fixed const& rhs) const;

  Fixed& operator++(void);
  Fixed operator++(int);
  Fixed& operator--(void);
  Fixed operator--(int);

  static Fixed const& min(Fixed const& nb1, Fixed const& nb2);
  static Fixed const& max(Fixed const& nb1, Fixed const& nb2);
  static Fixed const& min(Fixed& nb1, Fixed& nb2);
  static Fixed const& max(Fixed& nb1, Fixed& nb2);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

private:
  static int const _bits = 8;
  int _rawBits;
};

std::ostream& operator<<(std::ostream& out, Fixed const& inst);

#endif

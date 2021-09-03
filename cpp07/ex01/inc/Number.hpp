#ifndef NUMBER_HPP
#define NUMBER_HPP

#include <iostream>

class Number {
public:
  Number(const double& n) : value(n){};

  // COMPARISONS
  bool operator>(Number const& rhs) const { return this->value > rhs.value; }
  bool operator<(Number const& rhs) const { return this->value < rhs.value; }
  bool operator>=(Number const& rhs) const { return this->value >= rhs.value; }
  bool operator<=(Number const& rhs) const { return this->value <= rhs.value; }
  bool operator==(Number const& rhs) const { return this->value == rhs.value; }
  bool operator!=(Number const& rhs) const { return this->value != rhs.value; }

  Number const& operator=(Number const& rhs) {
    if (*this != rhs) {
      this->value = rhs.value;
    }
    return *this;
  }

  double const& getValue(void) const { return this->value; }

private:
  Number(void);
  double value;
};

std::ostream& operator<<(std::ostream& out, Number const& inst) {
  return out << inst.getValue();
}

#endif

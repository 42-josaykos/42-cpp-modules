#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : virtual public WrongAnimal {

public:
  WrongCat(void);
  WrongCat(WrongCat const &src);
  virtual ~WrongCat(void);

  WrongCat &operator=(WrongCat const &rhs);

  void makeSound(void) const;
};

#endif

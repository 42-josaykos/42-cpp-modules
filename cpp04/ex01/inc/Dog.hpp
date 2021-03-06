#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : virtual public Animal {

public:
  Dog(void);
  Dog(Dog const& src);
  virtual ~Dog(void);

  Dog& operator=(Dog const& rhs);

  void   makeSound(void) const;
  Brain* getBrain(void);

private:
  Brain* brain;
};

#endif

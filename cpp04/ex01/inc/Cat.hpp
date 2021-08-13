#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : virtual public Animal {

public:
  Cat(void);
  Cat(Cat const &src);
  virtual ~Cat(void);

  Cat &operator=(Cat const &rhs);

  void makeSound(void) const;

private:
  Brain *brain;
};

#endif

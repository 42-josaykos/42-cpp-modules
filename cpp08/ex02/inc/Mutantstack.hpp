#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>

class Mutantstack {

public:
  Mutantstack(void);
  Mutantstack(Mutantstack const& src);
  virtual ~Mutantstack(void);

  Mutantstack& operator=(Mutantstack const& rhs);

private:
};

#endif

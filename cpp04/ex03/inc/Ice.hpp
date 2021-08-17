#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
  Ice(void);
  Ice(Ice const& src);
  virtual ~Ice(void);

  Ice& operator=(Ice const& rhs);

  AMateria* clone(void) const;
  virtual void       use(void);
};

#endif

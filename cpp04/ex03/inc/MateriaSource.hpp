#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
  MateriaSource(void);
  MateriaSource(MateriaSource const& src);
  virtual ~MateriaSource(void);

  MateriaSource& operator=(MateriaSource const& rhs);

private:
};

#endif

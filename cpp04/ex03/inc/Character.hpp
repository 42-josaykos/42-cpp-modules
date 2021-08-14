#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:
  Character(std::string const& name);
  Character(Character const& src);
  virtual ~Character(void);

  Character& operator=(Character const& rhs);

private:
  Character(void);
};

#endif

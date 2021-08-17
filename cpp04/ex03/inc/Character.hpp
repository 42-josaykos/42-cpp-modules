#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:
  Character(std::string const& name);
  Character(Character const& src);
  Character(ICharacter const* ptr);
  virtual ~Character(void);

  Character& operator=(Character const& rhs);

  std::string const& getName() const;
  // virtual void               equip(AMateria* m) = 0;
  // virtual void               unequip(int idx) = 0;
  // virtual void               use(int idx, ICharacter& target) = 0;

private:
  Character(void);
  std::string _name;
};

#endif

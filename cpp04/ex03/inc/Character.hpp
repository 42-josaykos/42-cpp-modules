#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:
  Character(std::string const& name);
  Character(Character const& src);
  virtual ~Character(void);

  Character& operator=(Character const& rhs);

  std::string const& getName() const;
  void               equip(AMateria* m);
  void               unequip(int idx);
  void               use(int idx, ICharacter& target);

private:
  std::string const _name;
  Character(void);
};

#endif

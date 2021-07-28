#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:
  HumanB(void);
  HumanB(std::string const name);
  ~HumanB(void);

  void attack(void);
  void setWeapon(Weapon const str);

private:
  std::string _name;
  Weapon _weapon;
};

#endif
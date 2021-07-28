#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

public:
  Weapon(std::string const str);
  ~Weapon(void);
  std::string const getType(void);
  void setType(std::string const str);

private:
  std::string _type;
};

#endif
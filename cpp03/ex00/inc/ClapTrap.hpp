#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
  ClapTrap(std::string name);
  ClapTrap(ClapTrap const& src);
  ~ClapTrap(void);

  ClapTrap& operator=(ClapTrap const& rhs);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

private:
  ClapTrap(void);
  std::string _name;
  int _hitpoints;
  int _energyPoints;
  int _attackDamage;
};

#endif

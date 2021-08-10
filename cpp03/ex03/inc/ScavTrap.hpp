#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const& src);
  virtual ~ScavTrap(void);

  ScavTrap& operator=(ScavTrap const& rhs);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void guardGate(void);

private:
  ScavTrap(void);
};

#endif

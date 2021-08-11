#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
  DiamondTrap(std::string name);
  DiamondTrap(DiamondTrap const& src);
  virtual ~DiamondTrap(void);

  DiamondTrap& operator=(DiamondTrap const& rhs);

  // using ScavTrap::attack;
  void attack(std::string const& target);

  void whoAmI(void);

private:
  DiamondTrap(void);
  std::string _name;
};

#endif

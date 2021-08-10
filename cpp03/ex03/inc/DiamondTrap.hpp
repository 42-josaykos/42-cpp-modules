#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
  DiamondTrap(std::string name);
  DiamondTrap(DiamondTrap const& src);
  ~DiamondTrap(void);

  DiamondTrap& operator=(DiamondTrap const& rhs);

  // void attack(std::string const& target);
  using ScavTrap::attack;
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void whoAmI(void);

private:
  DiamondTrap(void);
  std::string _name;
};

#endif

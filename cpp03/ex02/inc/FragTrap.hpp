#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
  FragTrap(FragTrap const& src);
  FragTrap(std::string name);
  virtual ~FragTrap(void);

  FragTrap& operator=(FragTrap const& rhs);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void highFivesGuys(void);

private:
  FragTrap(void);
};

#endif

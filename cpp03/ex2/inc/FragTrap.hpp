#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
  FragTrap(FragTrap const& src);
  ~FragTrap(void);

  FragTrap& operator=(FragTrap const& rhs);

  void highFivesGuys(void);

private:
  FragTrap(void);
};

#endif

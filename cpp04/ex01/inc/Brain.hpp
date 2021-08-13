#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

public:
  Brain(void);
  Brain(Brain const &src);
  virtual ~Brain(void);

  Brain &operator=(Brain const &rhs);

private:
  std::string ideas[100];
};

#endif

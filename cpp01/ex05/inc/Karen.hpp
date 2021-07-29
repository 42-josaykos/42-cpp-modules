#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

const std::string MSG[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

class Karen {
public:
  Karen(void);
  ~Karen(void);

  void (Karen::*fpointer[4])(void);
  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
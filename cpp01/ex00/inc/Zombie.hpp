#include <iostream>

class Zombie {

public:
  Zombie(std::string str);
  Zombie(void);
  ~Zombie(void);

  void announce(void) const;
  void set_name(std::string str);
  std::string get_name(void) const;

private:
  std::string name;
};
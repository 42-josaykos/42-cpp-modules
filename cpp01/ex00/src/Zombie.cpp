#include "zombies.hpp"

Zombie::Zombie(std::string str) : name(str) {
  announce();
  return;
}

Zombie::~Zombie(void) {
  std::cout << this->name << " destroyed" << std::endl;
  return;
}

void Zombie::announce(void) {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}

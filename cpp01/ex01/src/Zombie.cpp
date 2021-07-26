#include "zombies.hpp"

Zombie::Zombie(std::string str) : name(str) {
  announce();
  return;
}

Zombie::Zombie(void) { return; }

Zombie::~Zombie(void) {
  std::cout << this->name << " destroyed" << std::endl;
  return;
}

void Zombie::announce(void) const {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}

void Zombie::set_name(std::string str) {
  this->name = str;
  return;
}

std::string Zombie::get_name(void) const { return this->name; }

#include "zombies.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *newZombies = new Zombie[N];
  (void)name;
  return newZombies;
}

int main(void) {
  Zombie *newHorde = zombieHorde(4, "soldier");
  (void)newHorde;
  delete[] newHorde;
  return 0;
}

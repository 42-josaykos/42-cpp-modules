#include "zombies.hpp"

int main(void) {
  Zombie *myZombie = newZombie("Zombie-on-the-heap");
  randomChump("Zombie-on-the-stack");

  delete myZombie;
  return 0;
}

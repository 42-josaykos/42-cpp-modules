#include "zombies.hpp"

int main(void) {
  Zombie *myZombie = newZombie("myZombie");
  delete myZombie;
  return 0;
}

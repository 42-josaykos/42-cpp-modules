#include "zombies.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *newZombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    newZombies[i].set_name(name + "_" + nb_to_string(i + 1));
    newZombies[i].announce();
  }
  return newZombies;
}

int main(void) {
  Zombie *newHorde = zombieHorde(4, "Acolyte");
  std::cout << "Pointer to the first Zombie is: " << newHorde->get_name()
            << std::endl;
  delete[] newHorde;
  return 0;
}

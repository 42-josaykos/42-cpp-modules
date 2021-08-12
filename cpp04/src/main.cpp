#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  // Animal species_1;
  // std::cout << species_1.getType() << std::endl;
  // species_1.makeSound();
  //
  // Animal species_2(species_1);
  // std::cout << species_2.getType() << std::endl;
  // species_2.makeSound();
  //
  // Cat nyancat_1;
  // std::cout << nyancat_1.getType() << std::endl;
  // nyancat_1.makeSound();
  //
  // Cat nyancat_2(nyancat_1);
  // std::cout << nyancat_2.getType() << std::endl;
  // nyancat_2.makeSound();
  //
  // Dog wandog_1;
  // std::cout << wandog_1.getType() << std::endl;
  // wandog_1.makeSound();
  //
  // Dog wandog_2(wandog_1);
  // std::cout << wandog_2.getType() << std::endl;
  // wandog_2.makeSound();

  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete i;
  delete j;
  delete meta;

  return 0;
}

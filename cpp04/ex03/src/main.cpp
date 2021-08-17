#include "Ice.hpp"
#include <iostream>

int main(void) {

  AMateria* tmp = new Ice();
  std::cout << "tmp: " << tmp->getType() << std::endl;

  AMateria* copy = tmp->clone();
  std::cout << "copy: " << copy->getType() << std::endl;

  delete copy;
  delete tmp;

  // IMateriaSource* src = new MateriaSource();
  // src->learnMateria(new Ice());
  // src->learnMateria(new Cure());

  // ICharacter* me = new Character("me");
  // AMateria*   tmp;

  // tmp = src->createMateria("ice");
  // me->equip(tmp);
  // tmp = src->createMateria("cure");
  // me->equip(tmp);
  // ICharacter* bob = new Character("bob");
  // me->use(0, *bob);
  // me->use(1, *bob);

  // delete bob;
  // delete me;
  // delete src;

  return 0;
}
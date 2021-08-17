#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {

  AMateria* ice = new Ice();
  AMateria* cure = new Cure();
  std::cout << "ice: " << ice->getType() << std::endl;
  std::cout << "cure: " << cure->getType() << std::endl;

  AMateria* copy = ice->clone();
  delete copy;
  copy = cure->clone();
  std::cout << "copy: " << copy->getType() << std::endl;

  ICharacter* bob = new Character("bob");
  ICharacter* clonebob = new Character(bob);
  Character   bill("bill");
  Character   clonebill = bill;

  std::cout << bob->getName() << std::endl;
  std::cout << clonebob->getName() << std::endl;
  std::cout << bill.getName() << std::endl;
  std::cout << clonebill.getName() << std::endl;

  bob->equip(ice);
  bob->equip(cure);
  bob->use(0, bill);
  bob->use(1, bill);
  delete bob;

  std::cout << clonebob->getName() << std::endl;
  clonebob->equip(cure);
  clonebob->equip(ice);
  clonebob->use(0, clonebill);
  clonebob->use(1, clonebill);

  ICharacter* me = new Character(clonebob);
  me->equip(ice);
  me->use(0, *clonebob);
  clonebob->use(0, clonebill);

  delete me;
  delete copy;
  delete cure;
  delete ice;
  delete clonebob;

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
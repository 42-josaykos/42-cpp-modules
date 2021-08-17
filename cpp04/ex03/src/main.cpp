#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {

  AMateria* tmp = new Ice();
  AMateria* tmp2 = new Cure();
  std::cout << "tmp: " << tmp->getType() << std::endl;
  std::cout << "tmp2: " << tmp2->getType() << std::endl;

  AMateria* copy = tmp->clone();
  delete copy;
  copy = tmp2->clone();
  std::cout << "copy: " << copy->getType() << std::endl;

  ICharacter* bob = new Character("bob");
  bob->equip(tmp);
  // ICharacter* clonebob = new Character(bob);
  ICharacter* clonebob = bob;
  Character   bill("bill");
  Character   clonebill = bill;

  std::cout << bob->getName() << std::endl;
  std::cout << clonebob->getName() << std::endl;
  std::cout << bill.getName() << std::endl;
  std::cout << clonebill.getName() << std::endl;

  bob->equip(tmp);
  bob->equip(tmp2);
  bob->use(0, bill);
  bob->use(1, bill);
  delete bob;

  std::cout << clonebob->getName() << std::endl;
  clonebob->equip(tmp);
  clonebob->equip(tmp2);
  clonebob->use(0, clonebill);
  clonebob->use(1, clonebill);

  ICharacter* me = new Character(clonebob);
  me->equip(tmp2);
  me->use(0, *clonebob);
  clonebob->use(0, clonebill);

  delete me;
  delete copy;
  delete tmp2;
  delete tmp;
  // delete bob;
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
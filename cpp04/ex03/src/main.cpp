#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {

  // AMateria* ice = new Ice();
  // AMateria* cure = new Cure();
  // std::cout << "ice: " << ice->getType() << std::endl;
  // std::cout << "cure: " << cure->getType() << std::endl;

  // AMateria* copy = ice->clone();
  // delete copy;
  // copy = cure->clone();
  // std::cout << "copy: " << copy->getType() << std::endl;

  // ICharacter* bob = new Character("bob");
  // ICharacter* clonebob = new Character(bob);
  // Character   bill("bill");
  // Character   clonebill = bill;

  // std::cout << bob->getName() << std::endl;
  // std::cout << clonebob->getName() << std::endl;
  // std::cout << bill.getName() << std::endl;
  // std::cout << clonebill.getName() << std::endl;

  // bob->equip(ice);
  // bob->equip(cure);
  // bob->use(0, bill);
  // bob->use(1, bill);
  // delete bob;

  // std::cout << clonebob->getName() << std::endl;
  // clonebob->equip(cure);
  // clonebob->equip(ice);
  // clonebob->use(0, clonebill);
  // clonebob->use(1, clonebill);

  // ICharacter* me = new Character(clonebill);
  // std::cout << me->getName() << std::endl;
  // me->equip(ice);
  // me->equip(cure);
  // me->use(0, *clonebob);
  // me->unequip(1);
  // me->use(0, *clonebob);
  // me->equip(ice);
  // me->use(1, clonebill);

  // delete me;
  // delete copy;
  // delete cure;
  // delete ice;
  // delete clonebob;

  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");
  AMateria*   materia1;
  AMateria*   materia2;

  materia1 = src->createMateria("ice");
  me->equip(materia1);
  materia2 = src->createMateria("cure");
  me->equip(materia2);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  // me->unequip(0);
  // me->use(0, *bob);
  // me->equip(materia2);
  // me->use(0, *bob);

  delete bob;
  delete me;
  delete src;
  delete materia1;
  delete materia2;

  return 0;
}
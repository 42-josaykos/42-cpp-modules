#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// https://stackoverflow.com/questions/7196172/can-a-pointer-to-base-point-to-an-array-of-derived-objects?rq=1
int main(void) {
  Animal** array = new Animal*[6];
  Dog      copydog;
  Cat      copycat;

  Dog clonedog;
  clonedog = copydog;

  Cat clonecat(copycat);

  std::cout << "copydog is " << copydog.getType() << std::endl;
  std::cout << "clonedog is " << clonedog.getType() << std::endl;

  std::cout << "copycat is " << copycat.getType() << std::endl;
  std::cout << "clonecat is " << clonecat.getType() << std::endl;

  Brain*       brain_ptr = copycat.getBrain();
  std::string* ideas = brain_ptr->getIdeas();
  ideas[0] = "copycat idea 0";
  std::cout << ideas[0] << std::endl;

  brain_ptr = clonecat.getBrain();
  ideas = brain_ptr->getIdeas();
  // ideas[0] = "clonecat idea 0";
  std::cout << ideas[0] << std::endl;

  for (int i = 0; i < 3; i++) {
    array[i] = new Dog();
  }

  for (int i = 3; i < 6; i++) {
    array[i] = new Cat();
  }

  for (int i = 0; i < 6; i++) {
    std::cout << array[i]->getType() << std::endl;
    array[i]->makeSound();
  }

  for (int i = 0; i < 6; i++) {
    delete array[i];
  }

  delete[] array;

  return 0;
}
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  Animal array[10];

  for (int i = 0; i < 5; i++) {
    array[i] = Dog();
  }
  for (int i = 5; i < 10; i++) {
    array[i] = Cat();
  }

  std::cout << array[0].getType() << std::endl;
  std::cout << array[5].getType() << std::endl;

  return 0;
}
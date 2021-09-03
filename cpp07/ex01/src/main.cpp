#include "Number.hpp"
#include "iter.hpp"
#include <iostream>

int main(void) {
  std::cout << "--- iter ---" << std::endl;

  std::cout << "<int>" << std::endl;
  int arrayOfInts[] = {42, 43, 44, 45, 46};
  ::iter(arrayOfInts, 5, print_element);
  std::cout << std::endl;

  std::cout << "<char>" << std::endl;
  char str[] = {'h', 'e', 'l', 'l', 'o'};
  ::iter(str, 5, print_element);
  std::cout << std::endl;

  std::cout << "<string>" << std::endl;
  std::string arrayOfStrs[] = {"hello", "world", "42", "Paris", "student"};
  ::iter(arrayOfStrs, 5, print_element);
  std::cout << std::endl;

  std::cout << "<Number>" << std::endl;
  Number arrayOfNbrs[] = {Number(1), Number(2), Number(3), Number(4),
                          Number(5)};
  ::iter(arrayOfNbrs, 5, print_element);

  return 0;
}
#include "Array.hpp"

int main(void) {
  int* a = new int();
  std::cout << *a << std::endl;

  // Array<int>* ar = new Array<int>;
  Array<int>* ar2 = new Array<int>(5);
  Array<int>  ar3 = *ar2;

  (*ar2)[0] = 42;
  ar3[0] = 34;

  // std::cout << *ar << std::endl;
  std::cout << (*ar2)[0] << std::endl;
  std::cout << ar3[0] << std::endl;

  delete a;
  // delete ar;
  delete ar2;
  // delete ar3;

  return 0;
}
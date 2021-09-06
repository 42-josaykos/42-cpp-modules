#include "Array.hpp"
#include "Number.hpp"

int main(void) {
  std::cout << " --- Simple types: int, float, etc... ---" << std::endl;
  Array<int>* ar = new Array<int>;
  Array<int>* ar2 = new Array<int>(5);

  (*ar2)[0] = 42;
  (*ar2)[1] = 43;

  std::cout << "*ar: " << *ar << ", ar->size(): " << ar->size() << std::endl;
  std::cout << "*ar2: " << *ar2 << ", ar2->size(): " << ar2->size()
            << std::endl;
  std::cout << "(*ar2)[1]: " << (*ar2)[1] << std::endl;

  try {
    std::cout << "(*ar2)[-1]: " << (*ar2)[-1] << std::endl;
  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
    ;
  }

  ar->destroy();
  ar2->destroy();

  std::cout << std::endl;
  std::cout << " --- Complex types: string ---" << std::endl;
  Array<std::string>* strs = new Array<std::string>(5);

  (*strs)[0] = "Hello";
  (*strs)[1] = "World";
  (*strs)[2] = "42";
  (*strs)[3] = "Paris";
  (*strs)[4] = "Student";

  std::cout << "strs->size(): " << strs->size() << std::endl;
  std::cout << "*strs: " << *strs << std::endl;
  std::cout << "(*strs)[0]: " << (*strs)[0] << std::endl;
  std::cout << "(*strs)[1]: " << (*strs)[1] << std::endl;
  std::cout << "(*strs)[2]: " << (*strs)[2] << std::endl;
  std::cout << "(*strs)[3]: " << (*strs)[3] << std::endl;
  std::cout << "(*strs)[4]: " << (*strs)[4] << std::endl;

  strs->destroy();

  std::cout << std::endl;
  std::cout << " --- Complex types: Number ---" << std::endl;

  Array<Number>* nbrs = new Array<Number>(5);

  (*nbrs)[0] = 42.23;
  (*nbrs)[1] = 43.24;
  (*nbrs)[2] = 44.25;
  (*nbrs)[3] = 45.26;
  (*nbrs)[4] = 46.27;

  std::cout << "nbrs->size(): " << nbrs->size() << std::endl;
  std::cout << "*nbrs: " << *nbrs << std::endl;
  std::cout << "(*nbrs)[0]: " << (*nbrs)[0] << std::endl;
  std::cout << "(*nbrs)[1]: " << (*nbrs)[1] << std::endl;
  std::cout << "(*nbrs)[2]: " << (*nbrs)[2] << std::endl;
  std::cout << "(*nbrs)[3]: " << (*nbrs)[3] << std::endl;
  std::cout << "(*nbrs)[4]: " << (*nbrs)[4] << std::endl;

  nbrs->destroy();

  return 0;
}
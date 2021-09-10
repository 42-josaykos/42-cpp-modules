#include <deque>
#include <easyfind.hpp>
#include <iostream>
#include <list>
#include <vector>

int main(void) {
  std::vector<int> v1;
  std::list<int>   l1;
  std::deque<int>  d1;

  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
  v1.push_back(5);

  l1.push_back(1);
  l1.push_back(2);
  l1.push_back(3);
  l1.push_back(4);
  l1.push_back(5);

  d1.push_back(1);
  d1.push_back(2);
  d1.push_back(3);
  d1.push_back(4);
  d1.push_back(5);

  try {
    std::cout << easyfind(v1, 4) << std::endl;
    std::cout << easyfind(l1, 2) << std::endl;
    std::cout << easyfind(d1, 3) << std::endl;
    std::cout << easyfind(d1, 10) << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}

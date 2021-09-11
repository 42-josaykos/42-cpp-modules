#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main() {
  MutantStack<int> mstack;

  std::cout << "< mstack.push() => 5, 17 >" << std::endl;
  mstack.push(5);
  mstack.push(17);

  std::cout << "mstack.top(): " << mstack.top() << std::endl;

  std::cout << "< mstack.pop() >" << std::endl;
  mstack.pop();

  std::cout << "mstack.size():" << mstack.size() << std::endl;

  std::cout << "< mstack.push() => 3, 5, 737, 0 >" << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }

  std::stack<int> s(mstack);

  std::cout << "--- Other Tests ---" << std::endl;
  std::cout << "mstack.empty(): " << mstack.empty() << std::endl;
  std::cout << "mstack.size(): " << mstack.size() << std::endl;
  std::cout << "mstack.top(): " << mstack.top() << std::endl;
  std::cout << "*mstack.begin(): " << *mstack.begin() << std::endl;
  std::cout << "*mstack.end(): " << *mstack.end() << std::endl;
  return 0;
}

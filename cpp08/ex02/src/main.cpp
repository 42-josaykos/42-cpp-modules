#include "MutantStack.hpp"
#include <iostream>
#include <list>
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

  std::cout << std::endl;
  std::cout << "--- Other Tests ---" << std::endl;
  std::cout << "mstack.empty(): " << mstack.empty() << std::endl;
  std::cout << "mstack.size(): " << mstack.size() << std::endl;
  std::cout << "mstack.top(): " << mstack.top() << std::endl;
  std::cout << "*mstack.begin(): " << *mstack.begin() << std::endl;
  std::cout << "*mstack.end(): " << *mstack.end() << std::endl;

  std::cout << std::endl;
  std::cout << "--- Tests with list and string  ---" << std::endl;

  MutantStack<std::string> strstack;
  std::list<std::string>   strlist;

  std::cout << "< strstack.push() => \"Hello\", \"world\" >" << std::endl;
  std::cout << "< strlist.push_back() => \"Hello\", \"world\" >" << std::endl;
  strstack.push("Hello");
  strstack.push("world");
  strlist.push_back("Hello");
  strlist.push_back("world");

  std::cout << "< strstack.pop() >" << std::endl;
  std::cout << "< strlist.pop() >" << std::endl;
  strstack.pop();
  strlist.pop_back();

  std::cout << "strstack.size():" << strstack.size() << std::endl;
  std::cout << "strlist.size():" << strlist.size() << std::endl;

  std::cout << "< strstack.push() => \"42\", \"Student\" >" << std::endl;
  std::cout << "< strlist.push_back() => \"42\", \"Student\" >" << std::endl;
  strstack.push("42");
  strstack.push("Student");
  strlist.push_back("42");
  strlist.push_back("Student");

  MutantStack<std::string>::iterator itstack = strstack.begin();
  MutantStack<std::string>::iterator itestack = strstack.end();
  std::list<std::string>::iterator   itlist = strlist.begin();
  std::list<std::string>::iterator   itelist = strlist.end();

  std::cout << "< str stack content >" << std::endl;
  for (; itstack != itestack; ++itstack) {
    std::cout << *itstack << std::endl;
  }

  std::cout << "< str list content >" << std::endl;

  for (; itlist != itelist; ++itlist) {
    std::cout << *itlist << std::endl;
  }

  return 0;
}

#include <iostream>

int main(void) {
  // string
  std::string str = "HI THIS IS BRAIN";

  // pointer to string
  std::string* stringPTR = &str;

  // reference to string
  std::string& stringREF = str;

  // address syntax: &str
  std::cout << "Address of str: " << &str << std::endl;

  // address syntax: stringPTR
  std::cout << "Address of str using pointer stringPTR: " << stringPTR
            << std::endl;

  // address syntax: &stringREF
  std::cout << "Address of str using reference stringREF: " << &stringREF
            << std::endl
            << std::endl;

  // value syntax: str
  std::cout << "Value of str: " << str << std::endl;

  // value syntax: *stringPTR
  std::cout << "Value of str using pointer stringPTR: " << *stringPTR
            << std::endl;

  // value syntax: stringREF
  std::cout << "Value of str using reference stringREF: " << stringREF
            << std::endl;
  return 0;
}

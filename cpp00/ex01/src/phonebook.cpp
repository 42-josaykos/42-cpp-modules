#include <iostream>
#include <string>

int main(void) {
  std::string input;
  std::cout << "Input: ";
  std::getline(std::cin, input);

  std::cout << "Result: " << input << std::endl;
  return 0;
}

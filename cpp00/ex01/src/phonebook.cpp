#include <iostream>
#include <string>

int main(void) {
  std::string input;
  std::cout << "--- Phonebook ---" << std::endl;
  std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;
  std::cout << "> ";
  std::getline(std::cin, input);

  std::cout << "Result: " << input << std::endl;
  return 0;
}

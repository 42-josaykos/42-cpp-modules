#include "../inc/phonebook.hpp"

int main(void) {
  std::cout << "--- Phonebook ---" << std::endl;
  std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;

  std::string input;
  Contact phonebook[8];

  while (1) {
    std::cout << "> ";
    std::getline(std::cin, input);

    if (std::cin.eof() || input.compare("EXIT") == 0) {
      std::cout << "EXIT" << std::endl;
      return 0;
    } else if (input.compare("ADD") == 0) {
      std::cout << "ADD" << std::endl;
    } else if (input.compare("SEARCH") == 0) {
      std::cout << "SEARCH" << std::endl;
    } else {
      std::cout << "Error: invalid command." << std::endl;
      std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;
    }
    // if (input.length() > 10) {
      // input.replace(9, 1, ".");
    // }
    // std::cout << std::setw(10) << input.substr(0, 10);
    // std::cout << "|" << std::endl;
  }
  return 0;
}

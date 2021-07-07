#include <iostream>
#include <iomanip>
#include <string>

int main(void) {
  std::string input;
  std::cout << "--- Phonebook ---" << std::endl;
  std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;

  while (1) {
    std::cout << "> ";
    std::getline(std::cin, input);

    if (std::cin.eof() || input.compare("EXIT") == 0) {
      std::cout << "EXIT" << std::endl;
      return 0;
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

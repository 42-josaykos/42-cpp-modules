#include "../inc/phonebook.hpp"

void add_contact(Contact *phonebook) {
  int i = 0;

  for (; i < 8; i++) {
    if (phonebook[i].getFirstName().empty()) {
      break ;
    }
  }
  phonebook[i].setFirstName("12345678901");
}

void search_contact(Contact *phonebook) {
  const std::string infos[4] = {
    "index",
    "first name",
    "last name",
    "nickname"
  };
  std::string data;

  for (int i = 0; i < 4; i++) {
    std::cout << std::setw(10) << infos[i];
    std::cout << "|";
    if (i == 3)
      std::cout << std::endl;
  }
  for (int i = 0; i < 8; i++) {
    if (!phonebook[i].getFirstName().empty()) {
      std::cout << std::setw(10) << i;
      std::cout << "|";
      data = phonebook[i].getFirstName();
      if (data.length() > 10) {
        data.replace(9, 1, ".");
      }
      std::cout << std::setw(10) << data.substr(0, 10);
    }
    std::cout << "|" << std::endl;
  }
}

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
      add_contact(phonebook);
    } else if (input.compare("SEARCH") == 0) {
      search_contact(phonebook);
    } else {
      std::cout << "Error: invalid command." << std::endl;
      std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;
    }
  }
  return 0;
}

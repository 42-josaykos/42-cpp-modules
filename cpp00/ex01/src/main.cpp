#include "../inc/phonebook.hpp"

void print_list(Contact *phonebook) {
  std::string data[11];
  const std::string infos[4] = {"index", "first name", "last name", "nickname"};

  for (int i = 0; i < 4; i++) {
    std::cout << std::setw(10) << infos[i];
    std::cout << "|";
    if (i == 3) {
      std::cout << std::endl;
    }
  }
  for (int i = 0; i < 8; i++) {
    phonebook[i].getInfos(data);
    std::cout << std::setw(10) << i;
    std::cout << "|";
    for(int j = 0; j < 4; j++) {
      if (data[j].length() > 10) {
        data[j].replace(9, 1, ".");
      }
      std::cout << std::setw(10) << data[j].substr(0, 10);
      if (j != 3) {
        std::cout << "|";
      } else {
        std::cout << std::endl;
      }
    }
  }
}

void add_contact(Contact *phonebook) {
  int i = 0;
  std::string data[11];
  data[0] = "Jonny";
  phonebook[i].setInfos(data);
}

void search_contact(Contact *phonebook) {
  print_list(phonebook);
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

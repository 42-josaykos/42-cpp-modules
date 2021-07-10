#include "../inc/phonebook.hpp"

void print_list(Contact *contacts) {
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
    contacts[i].getInfos(data);
    std::cout << std::setw(10) << i;
    std::cout << "|";
    for(int j = 0; j < 3; j++) {
      if (data[j].length() > 10) {
        data[j].replace(9, 1, ".");
      }
      std::cout << std::setw(10) << data[j].substr(0, 10);
      std::cout << "|";
      if (j == 2) {
        std::cout << std::endl;
      }
    }
  }
}

void add_contact(Contact *contacts) {
  int i = 0;
  std::string data[11];
  std::string input;
  const std::string prompt[11] = {
    "First Name ? ", "Last Name ? ", "Nickname ? ",
    "Phone Number ? ", "Darkest Secret ? "
  };

  for (int j = 0; j < 5; j++) {
    std::cout << prompt[j];
    std::getline(std::cin, input);
    data[j] = input;
  } 
  contacts[i].setInfos(data);
}

void search_contact(Contact *contacts) {
  print_list(contacts);
}

int main(void) {
  std::cout << "--- Phonebook ---" << std::endl;
  std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;

  std::string input;
  Phonebook phonebook;

  while (1) {
    std::cout << "> ";
    std::getline(std::cin, input);

    if (std::cin.eof() || input.compare("EXIT") == 0) {
      std::cout << "EXIT" << std::endl;
      return 0;
    } else if (input.compare("ADD") == 0) {
      add_contact(phonebook.contacts);
    } else if (input.compare("SEARCH") == 0) {
      search_contact(phonebook.contacts);
    } else {
      std::cout << "Error: invalid command." << std::endl;
      std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;
    }
  }
  return 0;
}

#include "../inc/phonebook.hpp"

int print_list(Contact *contacts) {
  std::string data[5];
  const std::string infos[4] = {"index", "first name", "last name", "nickname"};

  if (contacts[0].is_empty) {
    return 0;
  }
  for (int i = 0; i < 4; i++) {
    std::cout << std::setw(10) << infos[i];
    std::cout << "|";
    if (i == 3) {
      std::cout << std::endl;
    }
  }
  for (int i = 0; i < 8; i++) {
    if (!contacts[i].is_empty) {
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
  return 1;
}

void add_contact(Contact *contacts) {
  int i = 0;
  std::string data[5];
  std::string input;
  const std::string prompt[5] = {
    "First Name ? ", "Last Name ? ", "Nickname ? ",
    "Phone Number ? ", "Darkest Secret ? "
  };

  while (!contacts[i].is_empty) {
    i++;
  }
  for (int j = 0; j < 5; j++) {
    std::cout << prompt[j];
    std::getline(std::cin, input);
    input = trim_whitespaces(input);
    data[j] = input;
  } 
  contacts[i].setInfos(data);
  contacts[i].is_empty = false;
}

void print_contact_details(Contact *contacts, std::string input) {
  int index;
  int nb = 0;
  std::string data[5];
  const std::string infos[5] = {
    "First Name: ", "Last Name: ", "Nickname: ",
    "Phone Number: ", "Darkest Secret: "
  };

  while (!contacts[nb].is_empty) {
    nb++;
  }
  std::istringstream convert(input);
  if (!(convert >> index)) {
    index = -1;
  }
  if (index >= 0 && index < nb) {
    contacts[index].getInfos(data);
    for (int i = 0; i < 5; i++){
      std::cout << std::setw(16) << infos[i] << data[i] << std::endl;
    }
  } else {
    std::cout << "Error: invalid index." << std::endl;
  }
}

void search_contact(Contact *contacts) {
  std::string input;

  if (print_list(contacts)) {
    std::cout << std::setw(16) << "Select index: ";
    std::getline(std::cin, input);
    input = trim_whitespaces(input);
    print_contact_details(contacts, input);
  } else {
    std::cout << "Phonebook is empty." << std::endl;
  }
}

int main(void) {
  std::string input;
  Phonebook phonebook;

  std::cout << "--- Phonebook ---" << std::endl;
  while (1) {
    std::cout << "Available commands: EXIT, ADD, SEARCH." << std::endl;
    std::cout << "> ";
    std::getline(std::cin, input);

    input = trim_whitespaces(input);
    if (std::cin.eof() || input.compare("EXIT") == 0) {
      std::cout << "--- Exit Phonebook ---" << std::endl;
      return 0;
    } else if (input.compare("ADD") == 0) {
      add_contact(phonebook.contacts);
    } else if (input.compare("SEARCH") == 0) {
      search_contact(phonebook.contacts);
    } else {
      std::cout << "Error: invalid command." << std::endl;
    }
  }
  return 0;
}

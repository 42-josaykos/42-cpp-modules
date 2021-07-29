#include "Karen.hpp"
#include "strutils.hpp"
#include <iostream>

bool is_valid_option(std::string option) {
  for (std::size_t i = 0; i < 4; i++) {
    if (option.compare(MSG[i]) == 0) {
      return true;
    }
  }
  return false;
}

int main(int argc, char** argv) {
  Karen karen;

  if (argc > 1) {
    std::string option = str_to_upper(argv[1]);
    option = trim_whitespaces(option);
    if (is_valid_option(option)) {
      karen.complain(option);
      return 0;
    } else {
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
      return (1);
    }
  }
  std::cout << "Usage: "
            << "./karen [OPTION]" << std::endl
            << "OPTION: debug, info, warning, error" << std::endl;
  return 1;
}

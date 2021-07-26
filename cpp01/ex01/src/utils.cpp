#include <iostream>
#include <sstream>

std::string int_to_string(int nb) {
  std::ostringstream output;
  output << nb;
  return output.str();
}

int string_to_int(std::string str) {
  int nb;
  std::istringstream input(str);

  if (!(input >> nb))
    nb = 0;
  return nb;
}

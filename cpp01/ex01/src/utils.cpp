#include <iostream>
#include <sstream>

std::string int_to_string(int nb) {
  std::ostringstream convertStream;
  convertStream << nb;
  return convertStream.str();
}

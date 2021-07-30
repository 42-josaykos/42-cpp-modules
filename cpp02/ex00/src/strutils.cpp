#include "strutils.hpp"

std::string str_to_upper(std::string str) {
  for (std::size_t i = 0; i < str.length(); i++) {
    str[i] = std::toupper(str[i]);
  }
  return str;
}

std::string trim_whitespaces(std::string str) {
  str.erase(0, str.find_first_not_of(" \t"));
  str.erase(str.find_last_not_of(" \t") + 1);
  return str;
}

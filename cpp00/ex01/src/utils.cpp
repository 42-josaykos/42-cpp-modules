#include "../inc/common.hpp"

std::string trim_whitespaces(std::string str) {
  str.erase(0, str.find_first_not_of(" \t"));
  str.erase(str.find_last_not_of(" \t") + 1);
  return str;
}

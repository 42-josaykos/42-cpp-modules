#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

void to_int(double n, std::string s) {
  if (!std::isdigit(s[0]) && s.length() >= 3) {
    std::cout << "int: impossible" << std::endl;
  } else if (n > std::numeric_limits<int>::max() ||
             n < std::numeric_limits<int>::min()) {
    std::cout << "int: impossible" << std::endl;
  } else {
    std::cout << "int: " << static_cast<int>(n) << std::endl;
  }
}

void to_char(double n, std::string s) {
  if (!isdigit(s[0]) && s.length() >= 3) {
    std::cout << "char: impossible" << std::endl;
  } else if (n >= 32 && n < 127) {
    std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
  } else {
    std::cout << "char: Non displayable" << std::endl;
  }
}

int main(int argc, char** argv) {
  if (argc == 2) {
    std::string s;
    double      n;

    s = argv[1];
    if (!std::isdigit(s[0]) && s.length() == 1) {
      n = static_cast<int>(s[0]);
    } else {
      n = std::atof(argv[1]);
    }

    to_char(n, s);
    to_int(n, s);
    std::cout << "float: " << std::setprecision(1) << std::fixed
              << static_cast<float>(n) << "f" << std::endl
              << "double: " << static_cast<double>(n) << std::endl;

    return 0;
  }
  std::cout << "Usage: ./convert [NUMBER]" << std::endl;
  return 1;
}
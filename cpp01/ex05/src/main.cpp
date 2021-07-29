#include "Karen.hpp"
#include <iostream>

int main(int argc, char** argv) {
  Karen karen;

  if (argc > 1) {
    karen.complain(argv[1]);
  } else {
    std::cout << "Usage: "
              << "./karen [OPTION]" << std::endl
              << "OPTION: debug, info, warning, error" << std::endl;
  }
  return 0;
}

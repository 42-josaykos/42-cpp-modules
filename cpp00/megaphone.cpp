#include <iostream>
#include <string>

//
// Arg: a string to be converted in uppercase
// Dev: Trim trailing whitespaces and convert to uppercase
// Ret: uppercase string
///
std::string megaphone(std::string str) {
  str.erase(0, str.find_first_not_of(" \t"));
  str.erase(str.find_last_not_of(" \t") + 1);
  for (unsigned long i = 0; i < str.length(); ++i)
    str[i] = std::toupper(str[i]);
  return str;
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    for (int i = 1; i < argc; ++i) {
      std::cout << megaphone(static_cast<std::string>(argv[i]));
      if (i != argc - 1)
        std::cout << " ";
      else
        std::cout << std::endl;
    }
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  return 0;
}

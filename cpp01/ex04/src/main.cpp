#include <fstream>
#include <iostream>
#include <sstream>

// Create a copy of filename with every occurence of s1 replace by s2
int replace(std::string filename, std::string s1, std::string s2) {
  if (filename.empty() || s1.empty() || s2.empty()) {
    return 1;
  }

  std::ifstream ifs(filename.c_str());
  if (!ifs.is_open()) {
    std::cout << filename << " doesn't exist." << std::endl;
    return 1;
  }

  std::stringstream sstr;
  sstr << ifs.rdbuf();
  std::string output = sstr.str();

  std::ofstream ofs((filename + ".replace").c_str());
  ofs << output;
  ifs.close();
  ofs.close();
  return 0;
}

int main(void) {
  replace("test", "42", "43");
  return 0;
}

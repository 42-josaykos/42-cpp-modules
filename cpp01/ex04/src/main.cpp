#include <fstream>
#include <iostream>

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

  std::string output;
  while (std::getline(ifs, output)) {
    std::cout << output;
  }
  ifs.close();

  std::ofstream ofs((filename + ".replace").c_str());
  ofs << output.c_str();
  ofs.close();
  return 0;
}

int main(void) {
  replace("test", "1", "2");
  return 0;
}

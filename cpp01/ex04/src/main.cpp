#include <fstream>
#include <iostream>
#include <sstream>

std::string str_to_upper(std::string str) {
  for (size_t i = 0; i < str.length(); ++i) {
    str[i] = std::toupper(str[i]);
  }
  return str;
}

std::string const get_output(std::string str, std::string s1, std::string s2) {
  std::string output;
  size_t pos = 0;

  while (str.length() != 0) {
    if ((pos = str.find(s1)) != str.npos) {
      for (size_t i = 0; i < pos; i++) {
        output.push_back(str[i]);
      }
      str.erase(0, pos + s1.length());
      output.append(s2);
    } else {
      for (size_t i = 0; i < str.length(); i++) {
        output.push_back(str[i]);
      }
      break;
    }
  }
  return output;
}

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
  std::string str = sstr.str();
  std::string output = get_output(str, s1, s2);

  std::ofstream ofs((str_to_upper(filename) + ".replace").c_str());
  ofs << output;
  ifs.close();
  ofs.close();
  return 0;
}

int main(void) {
  replace("test", "program", "X");
  return 0;
}

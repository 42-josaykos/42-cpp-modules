#include <cstdlib>
#include <iostream>
#include <stdint.h>

struct Data {
  std::string s1;
  int         n;
  std::string s2;
};

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main(int argc, char** argv) {
  Data*     idata = new Data;
  uintptr_t raw;
  Data*     odata;

  if (argc == 4) {
    idata->s1 = argv[1];
    idata->n = std::atoi(argv[2]);
    idata->s2 = argv[3];
  } else {
    idata->s1 = "test";
    idata->n = 42;
    idata->s2 = "TEST";
  }

  std::cout << "idata : " << idata->s1 << idata->n << idata->s2 << std::endl;

  raw = serialize(idata);
  std::cout << "raw : " << raw << std::endl;

  odata = deserialize(raw);
  std::cout << "odata : " << odata->s1 << odata->n << odata->s2 << std::endl;

  delete idata;

  return 0;
}
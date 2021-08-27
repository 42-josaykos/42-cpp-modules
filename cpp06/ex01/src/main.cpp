#include <iostream>
#include <stdint.h>

struct Data {
  std::string s1;
  int         n;
  std::string s2;
};

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main(void) {
  Data*     idata = new Data;
  uintptr_t raw;
  Data*     odata;

  idata->s1 = "fedcba";
  idata->n = 256;
  idata->s2 = "ABCDEF";

  std::cout << "idata : " << idata->s1 << idata->n << idata->s2 << std::endl;

  raw = serialize(idata);
  std::cout << "raw : " << raw << std::endl;

  odata = deserialize(raw);
  std::cout << "odata : " << odata->s1 << odata->n << odata->s2 << std::endl;

  delete idata;

  return 0;
}
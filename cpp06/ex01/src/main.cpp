#include <cstdlib>
#include <iostream>
#include <stdint.h>
#include <string>
#include <unistd.h>

struct Data {
  std::string s;
  int         n;
};

uintptr_t serialize(Data* ptr) {
  int   bytes = ptr->s.length() + 4;
  int   slen = ptr->s.length();
  char* raw = new char(bytes);

  for (int i = 0; i < slen; i++) {
    raw[i] = ptr->s[i];
  }

  char* tmp = reinterpret_cast<char*>(&ptr->n);

  for (int i = slen; i < bytes; i++) {
    raw[i] = tmp[i];
  }

  return reinterpret_cast<uintptr_t>(raw);
}

Data* deserialize(uintptr_t raw) {
  Data* odata = new Data;
  char* rawChar = reinterpret_cast<char*>(raw);
  char* bytes = new char[4];

  odata->s = std::string(rawChar);

  for (int i = 0; i < 4; i++) {
    bytes[i] = rawChar[odata->s.length() + i];
  }
  odata->n = *(reinterpret_cast<int*>(bytes));

  delete[] bytes;
  return odata;
}

int main(void) {
  Data*     idata = new Data;
  uintptr_t raw;
  Data*     odata;

  idata->s = "fedcba";
  idata->n = 256;

  std::cout << "idata : " << idata->s << idata->n << std::endl;

  raw = serialize(idata);
  std::cout << "raw : " << raw << std::endl;

  odata = deserialize(raw);
  std::cout << "odata : " << odata->s << odata->n << std::endl;

  delete idata;
  delete odata;

  return 0;
}
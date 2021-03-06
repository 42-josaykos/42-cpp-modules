#include "Number.hpp"
#include <Tfunctions.hpp>
#include <iomanip>
#include <iostream>

int main(void) {
  int         a = 3;
  int         b = 8;
  float       c = 42.2f;
  float       d = 2.24f;
  Number      e(65);
  Number      f(25);
  std::string s1 = "Hello";
  std::string s2 = "World";

  std::cout << "--- swap ---" << std::endl;
  std::cout << "<int>" << std::endl;
  std::cout << "  a: " << a << ", b: " << b << std::endl;
  ::swap(a, b);
  std::cout << "  a: " << a << ", b: " << b << std::endl;

  std::cout << "<float>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  c: " << c
            << ", d: " << d << std::endl;
  ::swap(c, d);
  std::cout << "  c: " << c << ", d: " << d << std::endl;

  std::cout << "<Number>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  e: " << e.getValue()
            << ", f: " << f.getValue() << std::endl;
  ::swap(e, f);
  std::cout << "  e: " << e.getValue() << ", f: " << f.getValue() << std::endl;

  std::cout << "<string>" << std::endl;
  std::cout << "  s1: " << s1 << ", s2: " << s2 << std::endl;
  ::swap(s1, s2);
  std::cout << "  s1: " << s1 << ", s2: " << s2 << std::endl;
  std::cout << std::endl;

  std::cout << "--- min ---" << std::endl;
  std::cout << "<int>" << std::endl;
  std::cout << "  a: " << a << ", b: " << b << ", min: " << ::min(a, b)
            << std::endl;

  std::cout << "<float>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  c: " << c
            << ", d: " << d << ", min: " << min(c, d) << std::endl;

  std::cout << "<Number>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  e: " << e.getValue()
            << ", f: " << f.getValue() << ", min: " << ::min(e, f).getValue()
            << std::endl;

  std::cout << "<string>" << std::endl;
  std::cout << "  s1: " << s1 << ", s2: " << s2 << ", min: " << ::min(s1, s2)
            << std::endl;
  std::cout << std::endl;

  std::cout << "--- max ---" << std::endl;
  std::cout << "<int>" << std::endl;
  std::cout << "  a: " << a << ", b: " << b << ", max: " << ::max(a, b)
            << std::endl;

  std::cout << "<float>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  c: " << c
            << ", d: " << d << ", max: " << ::max(c, d) << std::endl;

  std::cout << "<Number>" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "  e: " << e.getValue()
            << ", f: " << f.getValue() << ", max: " << ::max(e, f).getValue()
            << std::endl;

  std::cout << "<string>" << std::endl;
  std::cout << "  s1: " << s1 << ", s2: " << s2 << ", max: " << ::max(s1, s2)
            << std::endl;
  return 0;
}
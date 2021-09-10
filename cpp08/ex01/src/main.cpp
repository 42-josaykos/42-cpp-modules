#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {

  std::srand(time(0));

  std::cout << "-- Subject Tests --" << std::endl;
  Span sp = Span(5);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  std::cout << std::endl;

  std::cout << "-- Main Tests --" << std::endl;

  std::cout << "  < For 10 random numbers >" << std::endl;
  Span span10 = Span(10);
  for (int i = 0; i < 10; i++) {
    span10.addNumber((rand() % 100) + 1);
  }

  std::cout << span10 << std::endl;
  std::cout << "Shortest span = " << span10.shortestSpan() << std::endl;
  std::cout << "Longest span = " << span10.longestSpan() << std::endl;

  std::cout << "  < For 100 random numbers >" << std::endl;
  Span span50 = Span(50);
  for (int i = 0; i < 50; i++) {
    span50.addNumber((rand() % 500) + 1);
  }

  std::cout << span50 << std::endl;
  std::cout << "Shortest span = " << span50.shortestSpan() << std::endl;
  std::cout << "Longest span = " << span50.longestSpan() << std::endl;

  std::cout << "  < For 10000 random numbers >" << std::endl;
  Span span10000 = Span(10000);
  for (int i = 1; i <= 10000; i++) {
    span10000.addNumber((rand() % 10000) + 1);
  }

  std::cout << "Shortest span = " << span10000.shortestSpan() << std::endl;
  std::cout << "Longest span = " << span10000.longestSpan() << std::endl;

  return 0;
}
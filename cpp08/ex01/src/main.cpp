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

  std::cout << "  < Pass a range of iterators to <Span>.addNumber() >"
            << std::endl;

  std::cout << "  < with a vector >" << std::endl;
  /// Create a vector with 5 numbers
  std::vector<int> nbrs_range;
  nbrs_range.push_back(42);
  nbrs_range.push_back(43);
  nbrs_range.push_back(44);
  nbrs_range.push_back(45);
  // nbrs_range.push_back(46);
  // nbrs_range.push_back(47);

  /// Create the Span instance
  Span span_range = Span(5);
  span_range.addNumber(21);

  /// Add the numbers from a vector
  span_range.addNumber(nbrs_range);

  std::cout << span_range << std::endl;
  std::cout << "Shortest span = " << span_range.shortestSpan() << std::endl;
  std::cout << "Longest span = " << span_range.longestSpan() << std::endl;

  std::cout << "  < with resize and fill >" << std::endl;

  /// Create the Span instance
  Span span_range2 = Span(5);
  span_range2.addNumber(423);      // [0]
  span_range2.addNumber(423);      // [1]
  span_range2.addNumber(0, 5, 21); // range is [from, to) and a value to fill

  std::cout << span_range2 << std::endl;
  std::cout << "Shortest span = " << span_range2.shortestSpan() << std::endl;
  std::cout << "Longest span = " << span_range2.longestSpan() << std::endl;

  return 0;
}
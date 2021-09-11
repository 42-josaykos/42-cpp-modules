#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {

public:
  Span(unsigned int const& n);
  Span(Span const& src);
  virtual ~Span(void);

  Span& operator=(Span const& rhs);

  void addNumber(int const& number);
  void addNumber(std::vector<int>& range);
  void addNumber(unsigned int from, unsigned int to, int val);

  int shortestSpan() const;
  int longestSpan() const;

  /// For printing on stdout in main test during project defense
  std::vector<int> getContent() const;

private:
  Span(void);
  std::vector<int> content;
  unsigned int     size;
};

std::ostream& operator<<(std::ostream& out, Span const& inst);

#endif

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
  int  shortestSpan() const;
  int  longestSpan() const;

  std::vector<int> content;

private:
  Span(void);
  unsigned int size;
};

#endif

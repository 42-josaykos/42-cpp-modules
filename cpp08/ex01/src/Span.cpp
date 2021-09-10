#include "Span.hpp"
#include <algorithm>

/*************** ctors & dtor *************************************************/

Span::Span(unsigned int const& n) : size(n) { return; }

Span::Span(Span const& src) {
  *this = src;
  return;
}

Span::~Span(void) { return; }

/*************** operators ****************************************************/

Span& Span::operator=(Span const& rhs) {
  if (this != &rhs) {
    this->size = rhs.size;
    this->content = rhs.content;
  }
  return *this;
}

/*************** member functions *********************************************/

void Span::addNumber(int const& number) {
  if (this->content.size() < this->size) {
    this->content.push_back(number);
  } else {
    throw std::exception();
  }
  return;
}

int Span::shortestSpan() const {
  if (this->content.size() <= 1) {
    throw std::exception();
  }

  std::vector<int>::const_iterator it;
  std::vector<int>                 tmp;

  int min1 = *std::min_element(this->content.begin(), this->content.end());
  for (it = this->content.begin(); it != this->content.end(); it++) {
    if (*it != min1) {
      tmp.push_back(*it);
    }
  }
  int min2 = *std::min_element(tmp.begin(), tmp.end());

  return min2 - min1;
}

int Span::longestSpan() const {
  if (this->content.size() <= 1) {
    throw std::exception();
  }

  int min = *std::min_element(this->content.begin(), this->content.end());
  int max = *std::max_element(this->content.begin(), this->content.end());

  return max - min;
}
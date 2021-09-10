#include "Span.hpp"

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
    ;
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

int Span::shortestSpan() const { return 0; }

int Span::longestSpan() const { return 0; }
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

void Span::addNumber(std::vector<int>& range) {
  if (this->content.size() - range.size() < 0) {
    throw std::exception();
  } else {

    std::vector<int>::const_iterator it;
    for (it = range.begin(); it != range.end(); ++it) {
      this->addNumber(*it);
    }
  }
}

/// range is [from, to)
void Span::addNumber(unsigned int from, unsigned int to, int val) {
  if (to > this->size) {
    throw std::exception();
  }
  if (from >= to) {
    throw std::exception();
  }
  if (from < this->content.size()) {
    throw std::exception();
  }
  if (to > this->content.size()) {
    this->content.resize(to);
  }
  std::vector<int>::iterator it = this->content.begin() + from;
  std::fill(it, it + (to - from), val);
}

int Span::shortestSpan() const {
  if (this->content.size() <= 1) {
    throw std::exception();
  }

  std::vector<int>::const_iterator it;
  std::vector<int>                 tmp;

  int min1 = *std::min_element(this->content.begin(), this->content.end());
  for (it = this->content.begin(); it != this->content.end(); ++it) {
    if (*it != min1) {
      tmp.push_back(*it);
    }
  }

  int min2;
  if (!tmp.empty()) {
    min2 = *std::min_element(tmp.begin(), tmp.end());
  } else {
    min2 = min1;
  }

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

/*************** other functions **********************************************/

std::vector<int> Span::getContent() const { return this->content; }

std::ostream& operator<<(std::ostream& out, Span const& inst) {

  std::vector<int>::const_iterator it;
  std::vector<int>                 tmp = inst.getContent();
  out << "[ ";
  for (it = tmp.begin(); it != tmp.end(); ++it) {
    out << *it;
    if ((it + 1) != tmp.end()) {
      out << ", ";
    }
  }
  out << " ]";
  return out;
}

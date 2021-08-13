#include "Brain.hpp"

Brain::Brain(void) {
  std::cout << "< Brain: default constructor called >" << std::endl;
  return;
}

Brain::Brain(Brain const &src) {
  std::cout << "< Brain: copy constructor called >" << std::endl;
  *this = src;
  return;
}

Brain::~Brain(void) {
  std::cout << "< Brain: destructor called >" << std::endl;
  return;
}

Brain &Brain::operator=(Brain const &rhs) {
  if (this != &rhs) {
    for (int i = 0; i < 100; i++) {
      this->ideas[i] = rhs.ideas[i];
    }
  }
  return *this;
}

std::string *Brain::getIdeas(void) { return this->ideas; }
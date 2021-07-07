#include "../inc/phonebook.hpp"

Contact::Contact(std::string name) {
  setName(name);
  return ;
}

Contact::~Contact(void) {
  return ;
}

void Contact::setName(std::string name) {
  this->_name = name;
}

std::string Contact::getName(void) const {
  return this->_name;
}

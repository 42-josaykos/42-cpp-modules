#include "../inc/phonebook.hpp"

Contact::Contact() {
  return ;
}

Contact::~Contact(void) {
  return ;
}

void Contact::setFirstName(std::string firstName) {
  this->_firstName = firstName;
}

std::string Contact::getFirstName(void) const {
  return this->_firstName;
}

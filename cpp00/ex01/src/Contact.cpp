#include "../inc/common.hpp"

Contact::Contact() {
  this->is_empty = true;
  return;
}

Contact::~Contact(void) { return; }

void Contact::setInfos(std::string *infos) {
  this->_firstName = infos[0];
  this->_lastName = infos[1];
  this->_nickname = infos[2];
  this->_phoneNumber = infos[3];
  this->_darkestSecret = infos[4];
  return;
}

void Contact::getInfos(std::string *infos) {
  infos[0] = this->_firstName;
  infos[1] = this->_lastName;
  infos[2] = this->_nickname;
  infos[3] = this->_phoneNumber;
  infos[4] = this->_darkestSecret;
  return;
}

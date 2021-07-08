#include "../inc/phonebook.hpp"

Contact::Contact() {
  return ;
}

Contact::~Contact(void) {
  return ;
}

void Contact::setInfos(std::string* infos) {
  this->_firstName = infos[0];
  this->_lastName = infos[1];
  this->_nickname = infos[2];
  this->_login = infos[3];
  this->_postalAddress = infos[4];
  this->_email = infos[5];
  this->_phoneNumber = infos[6];
  this->_birthday = infos[7];
  this->_favoriteMeal = infos[8];
  this->_underwearColor = infos[9];
  this->_darkestSecret = infos[10];
  return ;
}

void Contact::getInfos(std::string* infos) {
    infos[0] = this->_firstName;
    infos[1] = this->_lastName;
    infos[2] = this->_nickname;
    infos[3] = this->_login;
    infos[4] = this->_postalAddress;
    infos[5] = this->_email;
    infos[6] = this->_phoneNumber;
    infos[7] = this->_birthday;
    infos[8] = this->_favoriteMeal;
    infos[9] = this->_underwearColor;
    infos[10] = this->_darkestSecret;
  return ; 
}

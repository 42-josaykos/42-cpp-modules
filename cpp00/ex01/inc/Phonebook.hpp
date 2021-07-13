#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"

class Phonebook {
public:
  Phonebook(void);
  ~Phonebook(void);
  Contact contacts[8];
};

#endif
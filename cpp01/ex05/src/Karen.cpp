#include "Karen.hpp"
#include <iostream>

Karen::Karen(void) {
  this->fpointer[0] = &Karen::debug;
  this->fpointer[1] = &Karen::info;
  this->fpointer[2] = &Karen::warning;
  this->fpointer[3] = &Karen::error;
  return;
}

Karen::~Karen(void) { return; }

void Karen::complain(std::string level) {
  int nb;

  for (std::size_t i = 0; i < 4; i++) {
    if (level.compare(MSG[i]) == 0) {
      nb = i;
    }
  }

  std::cout << level << std::endl;
  (this->*fpointer[nb])();
  return;
}

void Karen::debug(void) {
  std::cout << "I love to get extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I just "
               "love it!"
            << std::endl;
  return;
}

void Karen::info(void) {
  std::cout << "I cannot believe adding extra bacon cost more money. You don't "
               "put enough! If you did I would not have to ask for it!"
            << std::endl;
  return;
}

void Karen::warning(void) {
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming here for years and you just started working here last month."
      << std::endl;
  return;
}

void Karen::error(void) {
  std::cout << "This is unacceptable, I want to speak to the manager now."
            << std::endl;
  return;
}

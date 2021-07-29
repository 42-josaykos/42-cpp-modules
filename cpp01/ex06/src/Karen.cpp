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
  switch (nb) {
  case 0:
    (this->*fpointer[0])();
    std::cout << std::endl;
  case 1:
    (this->*fpointer[1])();
    std::cout << std::endl;
  case 2:
    (this->*fpointer[2])();
    std::cout << std::endl;
  case 3:
    (this->*fpointer[3])();
    std::cout << std::endl;
  }
  return;
}

void Karen::debug(void) {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love to get extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I just "
               "love it!"
            << std::endl;
  return;
}

void Karen::info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon cost more money. You don't "
               "put enough! If you did I would not have to ask for it!"
            << std::endl;
  return;
}

void Karen::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming here for years and you just started working here last month."
      << std::endl;
  return;
}

void Karen::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable, I want to speak to the manager now."
            << std::endl;
  return;
}

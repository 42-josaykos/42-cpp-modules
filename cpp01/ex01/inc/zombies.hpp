#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP

#include "Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

// utils
std::string int_to_string(int nb);
int string_to_int(std::string str);

#endif
#include "humans.hpp"

int main(void) {
  std::cout << "Hello Humans !" << std::endl;

  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();

  Weapon club2 = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club2);
  jim.attack();
  club2.setType("some other type of club");
  jim.attack();

  Weapon gun = Weapon("gun");

  HumanB jo("jo");
  jo.attack();
  jo.setWeapon(gun);
  jo.attack();

  HumanA bill("bill", gun);
  bill.attack();
  gun.setType("\'Smith & Wesson 9mm\'");
  bill.attack();

  return 0;
}

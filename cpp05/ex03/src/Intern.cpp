#include "Intern.hpp"
#include <string>

Intern::Intern(void) {
  std::cout << "< Intern default ctor >" << std::endl;
  return;
}

Intern::Intern(Intern const& src) {
  std::cout << "< Intern copy ctor >" << std::endl;
  *this = src;
  return;
}

Intern::~Intern(void) { std::cout << "< Intern dtor >" << std::endl; }

Intern& Intern::operator=(Intern const& rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

Form* Intern::makeForm(std::string const& name, std::string const& target) {
  Form* form = NULL;
  int   nb = 0;

  const std::string form_name[3] = {"shrubbery creation", "robotomy request",
                                    "presidential pardon"};

  for (; nb < 3; nb++) {
    if (form_name[nb].compare(name) == 0) {
      break;
    }
  }

  switch (nb) {
  case 0:
    form = new ShrubberyCreationForm(target);
    break;
  case 1:
    form = new RobotomyRequestForm(target);
    break;
  case 2:
    form = new PresidentialPardonForm(target);
    break;
  default:
    std::cout << MAGENTA << name << " form doesn't exist" << RESET << std::endl;
    throw InvalidFormName();
  }

  std::cout << GREEN << "Intern creates " << *form << RESET << std::endl;
  return form;
}

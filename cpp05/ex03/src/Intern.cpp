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

Form* makeShrubbery(std::string const& target) {
  return new ShrubberyCreationForm(target);
}
Form* makeRobotomy(std::string const& target) {
  return new RobotomyRequestForm(target);
}
Form* makePardon(std::string const& target) {
  return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string const& name, std::string const& target) {

  Form* form = NULL;

  typedef Form* (*F)(std::string const& target);

  struct FormTypes {
    std::string form_name;
    F           func;
  };

  FormTypes forms[] = {
      {"presidential pardon", &makePardon},
      {"robotomy request", &makeRobotomy},
      {"shrubbery creation", &makeShrubbery},
  };

  for (int i = 0; i < 3; i++) {
    if (forms[i].form_name == name) {
      form = forms[i].func(target);
      break;
    }
  }
  if (form) {
    std::cout << GREEN << "Intern creates " << *form << RESET << std::endl;
    return (form);
  } else {
    throw InvalidFormName();
  }

  return form;
}

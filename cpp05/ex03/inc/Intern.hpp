#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern {

public:
  Intern(void);
  Intern(Intern const& src);
  virtual ~Intern(void);

  Intern& operator=(Intern const& rhs);

  class InvalidFormName : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Intern::InvalidFormName");
    }
  };

  Form* makeForm(std::string const& name, std::string const& target);
};

#endif

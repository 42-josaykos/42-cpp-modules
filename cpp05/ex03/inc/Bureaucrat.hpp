#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "utils.hpp"
#include <exception>
#include <iostream>

class Form;

class Bureaucrat {

public:
  // ctors & dtor
  Bureaucrat(const std::string&, int);
  Bureaucrat(Bureaucrat const& src);
  virtual ~Bureaucrat(void);

  // operators
  Bureaucrat& operator=(Bureaucrat const&);

  // functions
  std::string getName(void) const;
  int         getGrade(void) const;
  void        signForm(Form& form);
  void        executeForm(Form& form);

  // exceptions
  class GradeTooHighException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Bureaucrat::GradeTooHighException");
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Bureaucrat::GradeTooLowException");
    }
  };

private:
  Bureaucrat(void);
  std::string const _name;
  int               _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& inst);

#endif

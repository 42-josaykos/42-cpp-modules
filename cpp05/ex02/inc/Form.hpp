#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include "exception"
#include "utils.hpp"
#include <iostream>

class Form {

public:
  // ctors & dtor
  Form(std::string const& name, int sign, int exec);
  Form(Form const& src);
  virtual ~Form(void);

  // operators
  Form& operator=(Form const&);

  // exceptions
  class GradeTooHighException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Form::GradeTooHighException");
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Form::GradeTooLowException");
    }
  };

  class NoSignatureException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("Form::NoSignatureException");
    }
  };

  // functions
  std::string  getName(void) const;
  bool         isSigned(void) const;
  int          getSignGrade(void) const;
  int          getExecGrade(void) const;
  virtual void execute(Bureaucrat const& executor) const = 0;
  void         beSigned(Bureaucrat const& employee);

private:
  Form(void);
  std::string const _name;
  bool              _IsSigned;
  int const         _signGrade;
  int const         _execGrade;
};

std::ostream& operator<<(std::ostream& out, Form const& inst);

#endif

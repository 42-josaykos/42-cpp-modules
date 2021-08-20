#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "utils.hpp"
#include <exception>
#include <iostream>

class Bureaucrat {

public:
  // ctors & dtor
  Bureaucrat(const std::string&, int);
  Bureaucrat(Bureaucrat const& src);
  virtual ~Bureaucrat(void);

  // operators
  Bureaucrat& operator=(Bureaucrat const& rhs);

  // functions
  std::string getName(void) const;
  int         getGrade(void) const;

  // exceptions
  class GradeTooHighException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("GradeTooHighException");
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return ("GradeTooLowException");
    }
  };

private:
  Bureaucrat(void);
  const std::string _name;
  int               _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& inst);

#endif

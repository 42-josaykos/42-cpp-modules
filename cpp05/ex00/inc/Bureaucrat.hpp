#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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

private:
  Bureaucrat(void);
  const std::string _name;
  int               _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& inst);

#endif

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form {

public:
  RobotomyRequestForm(std::string const& target);
  RobotomyRequestForm(RobotomyRequestForm const& src);
  virtual ~RobotomyRequestForm(void);

  RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

private:
  RobotomyRequestForm(void);
  using Form::beSigned;
  void        execute(Bureaucrat const& executor) const;
  std::string _target;
};

#endif

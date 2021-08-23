#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {

public:
  PresidentialPardonForm(std::string const& target);
  PresidentialPardonForm(PresidentialPardonForm const& src);
  virtual ~PresidentialPardonForm(void);

  PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

private:
  PresidentialPardonForm(void);
  using Form::beSigned;
  void              execute(Bureaucrat const& executor) const;
  std::string const _target;
};

#endif

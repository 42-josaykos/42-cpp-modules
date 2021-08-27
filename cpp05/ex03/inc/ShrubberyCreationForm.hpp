#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
  ShrubberyCreationForm(std::string const& target);
  ShrubberyCreationForm(ShrubberyCreationForm const& src);
  virtual ~ShrubberyCreationForm(void);

  ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

  void makeForm(std::string target) { ShrubberyCreationForm form(target); }

private:
  ShrubberyCreationForm(void);
  using Form::beSigned;
  void              execute(Bureaucrat const& executor) const;
  std::string const _target;
};

#endif

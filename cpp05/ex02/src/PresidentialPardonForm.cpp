#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target)
    : Form("presidential_pardon", 25, 5), _target(target) {
  std::cout << "< PresidentialPardonForm(string&) ctor >" << std::endl;
  return;
}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const& src)
    : Form(src) {
  std::cout << "< PresidentialPardonForm copy ctor >" << std::endl;
  *this = src;
  return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
  std::cout << "< PresidentialPardonForm dtor >" << std::endl;
  return;
}

PresidentialPardonForm&
PresidentialPardonForm::operator=(PresidentialPardonForm const&) {
  return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
  Form::execute(executor);
  std::cout << GREEN << this->_target
            << " has been pardonned by Zafod Beeblebrox" << RESET
            << " 👨‍️" << std::endl;
  return;
}

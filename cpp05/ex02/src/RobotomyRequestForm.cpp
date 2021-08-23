#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
    : Form("Robotomy Request", 72, 45), _target(target) {
  std::cout << "< RobotomyRequestForm(string&) ctor >" << std::endl;
  return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)
    : Form(src) {
  std::cout << "< RobotomyRequestForm copy ctor >" << std::endl;
  *this = src;
  return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  std::cout << "< RobotomyRequestForm dtor >" << std::endl;
  return;
}

RobotomyRequestForm&
RobotomyRequestForm::operator=(RobotomyRequestForm const&) {
  return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  Form::execute(executor);
  std::cout << YELLOW + "⚡" + RESET << GREEN << "Driiizz...driizz...driiiz... "
            << RESET;
  std::srand(time(0));
  if (std::rand() % 2) {
    std::cout << GREEN << this->_target
              << " has been robotomized sucessfully 🤖" << RESET << std::endl;
  } else {
    std::cout << MAGENTA << "👿 Robotomization failed" << RESET << std::endl;
  }
  return;
}

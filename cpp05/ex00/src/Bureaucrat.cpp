#include "Bureaucrat.hpp"

/*********** ctors & dtors ***************************************************/

Bureaucrat::Bureaucrat(std::string const& name, int grade)
    : _name(name), _grade(grade) {
  std::cout << YELLOW << "< Bureaucrat(string&, int) ctor >" << RESET
            << std::endl;
  if (grade < 1) {
    throw GradeTooHighException();
  } else if (grade > 150) {
    throw GradeTooLowException();
  }
  return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
  std::cout << YELLOW << "< Bureaucrat copy ctor >" << RESET << std::endl;
  *this = src;
  return;
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << YELLOW << "< Bureaucrat dtor >" << RESET << std::endl;
  return;
}

/*********** operators *******************************************************/

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs) {
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_grade = rhs._grade;
  }
  return *this;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& inst) {
  out << inst.getName() << ", bureaucrat grade " << inst.getGrade();
  return out;
}

/*********** functions *******************************************************/

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

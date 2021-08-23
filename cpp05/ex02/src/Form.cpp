#include "Form.hpp"

/*********** ctors & dtors ***************************************************/

Form::Form(std::string const& name, int sign, int exec)
    : _name(name), _IsSigned(false), _signGrade(sign), _execGrade(exec) {
  std::cout << YELLOW << "< Form(name&, int, int) ctor >" << RESET << std::endl;

  if (sign < 1 || exec < 1) {
    throw GradeTooHighException();
  } else if (sign > 150 || exec > 150) {
    throw GradeTooLowException();
  }
  return;
}

Form::Form(Form const& src)
    : _name(src._name), _IsSigned(src._IsSigned), _signGrade(src._signGrade),
      _execGrade(src._execGrade) {
  std::cout << YELLOW << "< Form copy ctor >" << RESET << std::endl;
  return;
}

Form::~Form(void) {
  std::cout << YELLOW << "< Form dtor >" << RESET << std::endl;
  return;
}

/*********** operators *******************************************************/

Form& Form::operator=(Form const&) { return *this; }

std::ostream& operator<<(std::ostream& out, Form const& inst) {
  return out << inst.getName() << ", sign grade " << inst.getSignGrade()
             << ", exec grade " << inst.getExecGrade() << ", "
             << "is signed: " << inst.isSigned();
}

/*********** member functions *************************************************/

std::string Form::getName(void) const { return this->_name; }

bool Form::isSigned(void) const { return this->_IsSigned; }

int Form::getSignGrade(void) const { return this->_signGrade; }

int Form::getExecGrade(void) const { return this->_execGrade; }

void Form::beSigned(Bureaucrat const& employee) {
  if (employee.getGrade() <= this->_signGrade) {
    this->_IsSigned = true;
    std::cout << CYAN << employee << ", signs " << this->getName() << " form "
              << RESET << std::endl;
  } else {
    throw GradeTooLowException();
  }
  return;
}

void Form::execute(Bureaucrat const& executor) const {
  std::cout << CYAN << executor << ", will executes " << *this << RESET
            << std::endl;
  if (executor.getGrade() > this->getExecGrade()) {
    throw GradeTooLowException();
  } else if (this->isSigned() == false) {
    throw NoSignatureException();
  }
}

/*********** non member functions *********************************************/

void Bureaucrat::signForm(Form& form) {
  try {
    form.beSigned(*this);
  } catch (std::exception& e) {
    std::cout << RED << *this << " cannot sign " << form.getName()
              << " form (sign grade: " << form.getSignGrade() << ")"
              << " form because bureaucrat grade is too low" << RESET
              << std::endl;
  }
}

void Bureaucrat::executeForm(Form& form) {
  try {
    form.execute(*this);
  } catch (std::exception& e) {
    std::cout << RED + e.what() + RESET << std::endl;
    std::cout << MAGENTA << "Failed to execute form" << RESET << std::endl;
  }
}
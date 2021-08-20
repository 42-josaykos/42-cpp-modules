#include "Bureaucrat.hpp"

int main(void) {

  try {
    Bureaucrat bill("Bill", 150);

    std::cout << "bill.getName(): " << bill.getName() << std::endl;
    std::cout << "bill.getGrade(): " << bill.getGrade() << std::endl;
    std::cout << "bill: " << bill.getGrade() << std::endl;

  } catch (Bureaucrat::GradeTooLowException& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  } catch (Bureaucrat::GradeTooHighException& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  try {
    Bureaucrat unknown("unknown", 151);

  } catch (Bureaucrat::GradeTooLowException& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  try {
    Bureaucrat unknown("John", 0);

  } catch (Bureaucrat::GradeTooHighException& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
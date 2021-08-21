#include "Bureaucrat.hpp"

int main(void) {

  try {
    Bureaucrat bill("Bill", 150);

    std::cout << "bill.getName(): " << bill.getName() << std::endl;
    std::cout << "bill.getGrade(): " << bill.getGrade() << std::endl;
    std::cout << "bill: " << bill.getGrade() << std::endl;

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  // GradeTooLowException
  try {
    Bureaucrat bob("Bob", 151);

    std::cout << "bob.getName(): " << bob.getName() << std::endl;
    std::cout << "bob.getGrade(): " << bob.getGrade() << std::endl;
    std::cout << "bob: " << bob.getGrade() << std::endl;

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  // GradeTooHighException
  try {
    Bureaucrat john("John", 0);

    std::cout << "john.getName(): " << john.getName() << std::endl;
    std::cout << "john.getGrade(): " << john.getGrade() << std::endl;
    std::cout << "john: " << john.getGrade() << std::endl;

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
#include "Bureaucrat.hpp"

int main(void) {
  Bureaucrat bill("bill", 150);

  std::cout << "bill.getName(): " << bill.getName() << std::endl;
  std::cout << "bill.getGrade(): " << bill.getGrade() << std::endl;

  std::cout << "bill = " << bill.getGrade() << std::endl;

  try {
    Bureaucrat unknown("unknown", 151);
  } catch (Bureaucrat::GradeTooHighException& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
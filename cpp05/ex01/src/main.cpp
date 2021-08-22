#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <sstream>

int ft_strtoi(std::string str) {
  int                nb;
  std::istringstream input(str);

  return !(input >> nb) ? 0 : nb;
}

int main(void) {

  std::string input[5];

  std::cout << "Enter bureaucrat name: ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter bureaucrat grade: ";
  std::getline(std::cin, input[1]);
  std::cout << "Enter form name: ";
  std::getline(std::cin, input[2]);
  std::cout << "Enter form sign grade: ";
  std::getline(std::cin, input[3]);
  std::cout << "Enter form exec grade: ";
  std::getline(std::cin, input[4]);

  try {
    // bureaucrat
    Bureaucrat employee(input[0], ft_strtoi(input[1]));
    std::cout << input[0] << ".getName(): " << employee.getName() << std::endl;
    std::cout << input[0] << ".getGrade(): " << employee.getGrade()
              << std::endl;
    std::cout << input[0] << ": " << employee << std::endl;

    // form
    Form form(input[2], ft_strtoi(input[3]), ft_strtoi(input[4]));
    std::cout << input[2] << ".getName(): " << form.getName() << std::endl;
    std::cout << input[2] << ".getSignedGrade(): " << form.getSignGrade()
              << std::endl;
    std::cout << input[2] << ".getExecGrade(): " << form.getExecGrade()
              << std::endl;
    std::cout << BOLDWHITE << input[2] << ".isSigned(): " << form.isSigned()
              << std::endl;
    std::cout << input[2] << ": " << form << RESET << std::endl;

    // sign form by employee
    std::cout << GREEN << "Make " << employee << " sign " << form.getName()
              << " form..." << RESET << std::endl;
    employee.signForm(form);
    std::cout << BOLDWHITE << input[2] << ".isSigned(): " << form.isSigned()
              << std::endl;
    std::cout << input[2] << ": " << form << RESET << std::endl;

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
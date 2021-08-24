#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <sstream>

// convert string to int
int ft_strtoi(std::string str) {
  int nb;

  std::istringstream input(str);
  return !(input >> nb) ? 0 : nb;
}

int main(void) {

  // get user input to create bureaucrat
  std::string input[2];
  std::cout << "Valid form name: 'shrubbery creation', 'robotomy request', "
               "'presidential pardon'"
            << std::endl;
  std::cout << "Enter a valid form name: ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter a target: ";
  std::getline(std::cin, input[1]);

  Bureaucrat boss("boss", 1);

  try {
    Intern someRandomIntern;
    Form*  rrf;
    rrf = someRandomIntern.makeForm(input[0], input[1]);
    if (rrf) {
      boss.signForm(*rrf);
      boss.executeForm(*rrf);
      delete rrf;
    }
  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
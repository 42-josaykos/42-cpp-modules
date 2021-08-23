#include "Bureaucrat.hpp"
#include "Form.hpp"
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
  std::cout << "Enter bureaucrat name: ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter bureaucrat grade: ";
  std::getline(std::cin, input[1]);

  // CEO is the signer
  Bureaucrat CEO("the CEO", 1);

  try {
    // create bureaucrat
    Bureaucrat employee(input[0], ft_strtoi(input[1]));
    std::cout << input[0] << ": " << employee << std::endl;

    // shrubbery form, CEO signs and employee executes
    ShrubberyCreationForm form1("home");
    CEO.signForm(form1);
    employee.executeForm(form1);

    // Robotomy request form
    RobotomyRequestForm form2("lazy employee");
    CEO.signForm(form2);
    employee.executeForm(form2);

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
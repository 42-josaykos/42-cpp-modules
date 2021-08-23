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
  std::cout << "Enter grade for signer (Big Boss): ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter grade for executer (Simple Salaryman) : ";
  std::getline(std::cin, input[1]);

  try {
    // CEO is the signer
    Bureaucrat boss("Big Boss", ft_strtoi(input[0]));

    // create bureaucrat
    Bureaucrat employee("Little Bureaucrat", ft_strtoi(input[1]));

    std::cout << YELLOW << "Signer: " << boss << std::endl;
    std::cout << "Executer: " << employee << RESET << std::endl;

    // shrubbery form, CEO signs and employee executes
    ShrubberyCreationForm form1("home");
    boss.signForm(form1);
    employee.executeForm(form1);

    // Robotomy request form
    RobotomyRequestForm form2("Lazy Salaryman");
    boss.signForm(form2);
    employee.executeForm(form2);

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
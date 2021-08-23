#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <sstream>

int ft_strtoi(std::string str) {
  int                nb;
  std::istringstream input(str);

  return !(input >> nb) ? 0 : nb;
}

int main(void) {

  std::string input[2];

  std::cout << "Enter bureaucrat name: ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter bureaucrat grade: ";
  std::getline(std::cin, input[1]);

  try {
    // bureaucrat
    Bureaucrat employee(input[0], ft_strtoi(input[1]));
    std::cout << input[0] << ".getName(): " << employee.getName() << std::endl;
    std::cout << input[0] << ".getGrade(): " << employee.getGrade()
              << std::endl;
    std::cout << input[0] << ": " << employee << std::endl;

    // form
    ShrubberyCreationForm form("home");

    form.execute(employee);

  } catch (std::exception& e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }

  return 0;
}
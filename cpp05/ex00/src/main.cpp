#include "Bureaucrat.hpp"

int main(void) {
  Bureaucrat bill("bill", 150);

  std::cout << "bill.getName(): " << bill.getName() << std::endl;
  std::cout << "bill.getGrade(): " << bill.getGrade() << std::endl;

  std::cout << "bill = " << bill.getGrade() << std::endl;

  return 0;
}
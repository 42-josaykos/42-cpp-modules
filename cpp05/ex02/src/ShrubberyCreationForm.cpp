#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    : Form("create_shrubbery", 145, 137), _target(target) {
  std::cout << "< ShrubberyCreationForm(string&) ctor >" << std::endl;
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src)
    : Form(src) {
  std::cout << "< ShrubberyCreationForm copy ctor >" << std::endl;
  *this = src;
  return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  std::cout << "< ShrubberyCreationForm dtor >" << std::endl;
  return;
}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(ShrubberyCreationForm const&) {
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  Form::execute(executor);
  std::string   filename = this->_target + "_shrubbery.txt";
  std::ofstream file(filename.c_str());
  file << "       ,.," << std::endl
       << "      MMMM_    ,..," << std::endl
       << "        \"_ \"__\"MMMMM          ,...,," << std::endl
       << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl
       << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl
       << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl
       << "        ,., _\"__ \\__./ .\"" << std::endl
       << "       MMMMM_\"  \"_    ./" << std::endl
       << "        ''''      (    )" << std::endl
       << " ._______________.-'____\"---._." << std::endl
       << "  \\                          /" << std::endl
       << "   \\________________________/" << std::endl
       << "   (_)                    (_)" << std::endl
       << "   " << this->_target << std::endl;
  file.close();
  std::cout << GREEN << executor.getName()
            << " planted a nice shrubbery tree at " + this->_target + " !"
            << RESET << std::endl;
  return;
}

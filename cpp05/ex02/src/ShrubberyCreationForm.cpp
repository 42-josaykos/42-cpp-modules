#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    : Form("Schrubbery Creation", 145, 127), _target(target) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src)
    : Form(src) {
  *this = src;
  return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { return; }

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(ShrubberyCreationForm const&) {
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) {
  if (executor.getGrade() <= this->getExecGrade()) {

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
  }
  return;
}
// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  // Expected behavior
  try {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
    std::cout << rrf->getName() << std::endl;
    rrf->executer();
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
}
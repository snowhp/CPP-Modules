// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  // Expected behavior
  try {
    Bureaucrat BurA("other", 144);
    ShrubberyCreationForm FormA("Formâge A");
    FormA.execute(BurA);
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    //FormA.execute(BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
  try {
    Bureaucrat BurA("other", 72);
    RobotomyRequestForm FormA("hellooo");
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    std::cout << FormA << std::endl;
    BurA.executeForm(FormA);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
  try {
    Bureaucrat BurA("other", 25);
    PresidentialPardonForm FormA("hellooo");
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
}